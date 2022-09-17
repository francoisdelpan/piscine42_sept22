/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:18:35 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/17 08:50:51 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_int_number(int number)
{
	char	c;

	if (number <= 9)
	{
		c = number + '0';
		write(1, &c, 1);
	}
	else
	{
		print_int_number(number / 10);
		print_int_number(number % 10);
	}
}

void	print_formated(int a, int b)
{
	if (a <= 9)
	{
		print_int_number(0);
	}
	print_int_number(a);
	write(1, " ", 1);
	if (b <= 9)
	{
		print_int_number(0);
	}
	print_int_number(b);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a != b)
			{
				print_formated(a, b);
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
