/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:23:04 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/29 19:38:44 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = NULL;
	if (min > max)
		return (tab);

	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

int	main(void)
{
	int	i;
	int	*result;

	result = ft_range(15, 22);
	i = 0;
	while (result[i])
	{
		printf("%d\n", result[i]);
		i++;
	}
}
