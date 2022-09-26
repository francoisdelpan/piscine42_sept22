/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:08:25 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 21:38:53 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (nb == 0 && power == 0)
	{
		return (0);
	}
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	main(void)
{
	printf("%d\n", ft_iterative_power(3, 3));
	return (0);
}
