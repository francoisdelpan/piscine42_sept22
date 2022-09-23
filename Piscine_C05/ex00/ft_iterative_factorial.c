/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:41:55 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 20:48:39 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

int	main(void)
{
	int	i;

	i = 9;
	printf("Factoriel de %d = %d\n", i, ft_iterative_factorial(i));
	return (0);
}
