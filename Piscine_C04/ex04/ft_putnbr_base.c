/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:49:35 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 14:54:06 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_error_base(char *base_to_check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base_to_check[i] != '\0')
	{
		if (base_to_check[i] == '+' || base_to_check[i] == '-')
			return (1);
		while (base_to_check[j] != '\0')
		{
			if (base_to_check[i] == base_to_check[j] && j != i)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	get_base_length(char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	itob(unsigned int number, char *base_to_convert)
{
	unsigned int	base_length;
	unsigned int	i;
	unsigned int	j;
	char	*reverse_result;

	base_length = get_base_length(base_to_convert);
	i = 0;
	j = 0;
	while (number >= base_length)
	{
		reverse_result[i] = base_to_convert[number % 2];
		number /= 2;
		i++;
	}
	write(1, &base_to_convert[number % 2], 1);
	while (j < i)
	{
		write(1, &reverse_result[i - j], 1);
		j++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	unsigned int	base_length;
	char	result[10];
	int	i;

	i = 0;
	if (check_error_base(base) == 0)
	{
		if (nbr < 0)
		{
			number = nbr * -1;
			write(1, "-", 1);
		}
		else
		{
			number = nbr;
		}
		itob(number, base);
	}
}

int	main(void)
{
	ft_putnbr_base(16, "0123456789ABCDEF");
	return (0);
}
