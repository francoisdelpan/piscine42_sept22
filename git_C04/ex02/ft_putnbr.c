/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:14:09 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/02 21:15:11 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	number;

	if (nb < 0)
	{
		number = nb * -1;
		write(1, "-", 1);
	}
	else
	{
		number = nb;
	}
	if (number < 10)
	{
		ft_putchar(number);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
