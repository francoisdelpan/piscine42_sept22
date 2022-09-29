/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:09:21 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/29 20:36:28 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (-1);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int	*test[1];

	printf("%d\n", ft_ultimate_range(test, 15, 20));
}
