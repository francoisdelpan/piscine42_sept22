/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:04:48 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/02 21:26:50 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>





#include <stdio.h>

int	is_base_correct(char *base_to_check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base_to_check[i] != '\0')
	{
		if (base_to_check[i] == '+' || base_to_check[i] == '-'
			|| base_to_check[i] <= 32 || base_to_check[i] == 127)
			return (0);
		while (base_to_check[j] != '\0')
		{
			if (base_to_check[j] == base_to_check[i] && j != i)
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	if (i <= 1)
		return (0);
	else
		return (1);
}

int	atoi(char *str)
{
	int	nbr_minus;
	int	result;

	nbr_minus = 0;
	result = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			nbr_minus++;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	if (nbr_minus % 2 == 1)
		return (result * -1);
	return (result);
}

void	itob(unsigned int number, char *ref_base, unsigned int base_length)
{
	if (number >= base_length)
	{
		itob(number / base_length, ref_base, base_length);
	}
	write(1, &ref_base[number % base_length], 1);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	abs_number;
	unsigned int	base_length;
	int				number;

	if (is_base_correct(base))
	{
		base_length = 0;
		while (base[base_length] != '\0')
		{
			base_length++;
		}
		printf("base_length: %d\n", base_length);
		number = atoi(str);
		printf("number: %d\n", number);
		if (number < 0)
		{
			abs_number = number * -1;
			write(1, "-", 1);
		}
		else
			abs_number = number;
		itob(abs_number, base, base_length);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_atoi_base(argv[1], argv[2]);
	return (0);
}
