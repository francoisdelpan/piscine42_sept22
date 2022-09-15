/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:04:37 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/15 11:00:14 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	super_write(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
	if (!(d1 == '7' && d2 == '8' && d3 == '9'))
	{
		write(1, ",", 1);
	}
}

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	c2 = '0';
	c3 = '0';
	while (c1 <= '7')
	{
		while (c2 <= '8')
		{
			while (c3 <= '9')
			{
				if (c1 != c2 && c1 != c3 && c2 != c3)
				{
					super_write(c1, c2, c3);
				}
				c3++;
			}
			c3 = '0';
			c2++;
		}
		c2 = '0';
		c1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
