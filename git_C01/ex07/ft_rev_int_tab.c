/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:52:34 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/19 09:31:11 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;
	int	temp_size;

	index = 0;
	temp_size = size - 1;
	while (index < (size / 2))
	{
		temp = tab[index];
		tab[index] = tab[temp_size];
		tab[temp_size] = temp;
		index++;
		temp_size--;
	}
}

int	main(void)
{
	int	tab_test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size_test;
	int	i;

	size_test = 9;
	ft_rev_int_tab(tab_test, size_test);
	i = 0;
	while (i < size_test)
	{
		printf("%d", tab_test[i]);
		i++;
	}
	return (0);
}
