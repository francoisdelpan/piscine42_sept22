/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:52:34 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/19 00:16:05 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index;

	index = 0;
	size--;
	while (index <= (size / 2))
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
		index++;
		size--;
	}
}

int	main(void)
{
	int	*tab_test;
	int	size_test;
	int	i;

	size_test = 6;
	tab_test[0] = 1;
	tab_test[1] = 2;
	tab_test[2] = 3;
	tab_test[3] = 4;
	tab_test[4] = 5;
	tab_test[5] = 6;
	ft_rev_int_tab(tab_test, size_test);
	i = 0;
	while (i < size_test)
	{
		tab_test[i];
	}
	return (0);
}
