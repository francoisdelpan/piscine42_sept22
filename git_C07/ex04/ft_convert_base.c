/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:12:46 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/04 20:02:32 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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

int	base_to_int(char *nbr, char *base)
{
	int	base_len;
	int	i;
	int	int_eq_base;
	int	result;

	base_len = ft_strlen(base);
	result = 0;
	int_eq_base = 0;
	i = 0;
	while (nbr[i])
	{
		while (base[int_eq_base] != nbr[i])
			int_eq_base++;
		result += int_eq_base * ft_pow(base_len, base_len - i);
		int_eq_base = 0;
		i++;
	}
	return (i);
}

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (is_base_correct(base_from) == 0 || is_base_correct(base_to) == 0)
		return (NULL);
	printf("%d\n", base_to_int(nbr, base_from));
	return (base_to);
	
}

int	main(int ac, char **av)
{
	(void) ac;
	ft_convert_base(av[1], av[2], av[3]);
	return (0);
}
