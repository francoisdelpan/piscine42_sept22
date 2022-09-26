/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:16:41 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 22:26:05 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	test;

	test = 2;
	while (nb > test)
	{
		if (nb % test == 0)
		{
			return (0);
		}
		test++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = ft_is_prime(nb);
	while (is_prime == 0)
	{
		is_prime = ft_is_prime(nb + 1);
		nb += 1;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(11));
	return (0);
}
