/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:53:10 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 21:07:23 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return 1;
	}
	return (nb * ft_recursive_factorial(nb - 1));
	
}

int	main(void)
{
	int	i;

	i = 8;
	printf("La factoriel de %d est %d", i, ft_recursive_factorial(i));
	return (0);
}
