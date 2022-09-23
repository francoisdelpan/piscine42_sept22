/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:49:35 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 14:30:55 by fpannier         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	number;
	unsigned int	base_length;

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
		base_length = get_base_length(base);
		while (number >= base_length)
		{
			write(1, &base[number % base_length], 1);
			number /= base_length;
		}
		write(1, &base[number], 1);
	}
}

int	main(void)
{
	ft_putnbr_base(16, "0123456789ABCDEF");
	return (0);
}
