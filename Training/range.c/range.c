/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:59:00 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/30 11:49:06 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < (max - min))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	int	*result;

	result = ft_range(15, 20);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}
