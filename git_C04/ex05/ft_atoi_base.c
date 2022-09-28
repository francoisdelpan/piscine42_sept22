/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:04:48 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/28 22:33:22 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_base_correct(char *base_to_check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base_to_check[i] != '\0')
	{
		if (base_to_check[i] == '+' || base_to_check[i] == '-')
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
	unsigned int	nbr_minus;
	int	result;

	while ((*str != '\0' && *str >= '0' && *str <= '9')
		|| *str == '+' || *str == '-')
	{
		write(1, str, 1);
		if (*str == '-')
			nbr_minus += 1;
		else if (*str >= '0' && *str <= '9')
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
	int	number;
	unsigned int	abs_number;
	unsigned int	base_length;

	if (is_base_correct(base))
	{
		base_length = 0;
		while (base[base_length] != '\0')
		{
			base_length++;
		}
		write(1, &base_length, 2);
		number = atoi(str);
		write(1, &number, 16);
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
	{
		ft_atoi_base(argv[1], argv[2]);
	}
	return (0);
}
