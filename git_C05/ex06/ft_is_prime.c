/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:12:32 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 22:16:06 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	test;

	test = 2;
	while (test < nb)
	{
		if (nb % test == 0)
		{
			return (0);
		}
		test++;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_is_prime(9));
	return (0);
}
