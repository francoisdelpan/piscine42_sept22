/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:12:46 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/05 22:47:44 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int	is_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127)
			return (0);
		while (base[i] && base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_pow(nb, power - 1));
}

int	is_char_into(char c, char *base)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			result = 1;
		i++;
	}
	return (result);
}

int	get_correct_nbr(char *nbr, char *base)
{
	int	minus_count;
	int	i;
	int	j;
	int	end;

	minus_count = 0;
	i = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			minus_count++;
		i++;
	}
	end = 0;
	while (nbr[i] && is_char_into(nbr[i], base))
	{
		i++;
		end++;
	}
	j = 0;
	while (j < end)
	{
		nbr[j] = nbr[i - end + j];
		j++;
	}
	nbr[j] = '\0';
	return (minus_count % 2);
}

int	base_to_int(char *nbr, char *base)
{
	int	base_len;
	int	nbr_len;
	int	i;
	int	int_eq_base;
	int	result;

	base_len = ft_strlen(base);
	nbr_len = ft_strlen(nbr);
	result = 0;
	int_eq_base = 0;
	i = 0;
	while (nbr[i])
	{
		while (base[int_eq_base] != nbr[nbr_len - i - 1])
			int_eq_base++;
		result += int_eq_base * ft_pow(base_len, i);
		int_eq_base = 0;
		i++;
	}
	return (result);
}

void	int_to_char(int nbr, char *base, int base_len, char *result, int index)
{
	if (nbr >= base_len)
		int_to_char(nbr / base_len, base, base_len, result, index - 1);
	result[index] = base[nbr % base_len];
}

int	get_result_length(int nbr, int base_len)
{
	int	i;

	i = 1;
	while (nbr >= base_len)
	{
		i++;
		nbr /= base_len;
	}
	return (i + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		int_eq;
	int		result_len;
	int		minus_count;
	char	*result;

	if (is_base_correct(base_from) == 0 || is_base_correct(base_to) == 0)
		return (NULL);
	minus_count = get_correct_nbr(nbr, base_from);
	printf("nbr: %s\n", nbr);
	int_eq = base_to_int(nbr, base_from);
	result_len = get_result_length(int_eq, ft_strlen(base_to));
	result = (char *)malloc(sizeof(char) * (result_len + minus_count));
	if (result == NULL)
		return (NULL);
	printf("int_eq: %d\n", int_eq);
	printf("minus: %d\n", minus_count);
	if (minus_count == 1)
	{
		result[0] = '-';
	}
	// MAUVAISE GESTION DU MOINS
	int_to_char(int_eq, base_to, ft_strlen(base_to), result, result_len - 2);
	result[result_len - 1] = '\0';
	return (result);
}

int	main(int ac, char **av)
{
	(void) ac;
	//if (ft_convert_base(av[1], av[2], av[3]))
		printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
	//else
		//printf("NULL");
	return (0);
}
