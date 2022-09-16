/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:28:42 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/16 08:45:31 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_divisor(unsigned int start, int n)
{
	if (n != 0)
	{
		return (get_divisor(start * 10, n / 10));
	}
	return (start / 10);
}

void	display(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	iterate_result(unsigned int number, int divisor)
{
	if (divisor > 0)	
	{
		display(number / divisor);
		iterate_result(number % divisor, divisor / 10 );
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	number;
	int	divisor;

	if (nb < 0)
	{
		number = -nb;
		write(1, "-", 1);
	}
	else
	{
		number = nb;
	}

	divisor = get_divisor(1, number);
	iterate_result(number, divisor);
}

int	main(void)
{
	ft_putnbr(10);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(100);
	write(1, "\n", 1);
        ft_putnbr(2142424242);
	write(1, "\n", 1);
        ft_putnbr(-10000);
	return (0);
}
