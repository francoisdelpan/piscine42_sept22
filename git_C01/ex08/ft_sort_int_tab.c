/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:07:12 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/19 10:42:32 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	test_print_tab(int *tab_temp, int size_temp)
{
	int	i;

	i = 0;
	while (i < size_temp)
	{
		printf("%d ", tab_temp[i]);
		i++;
	}
	printf("\n\n");
}

int	main(void)
{
	int	tab_test[] = {1, 9, 4, 7, 12, 6, 42, 8, 4, 7};
	int	size_test = sizeof(tab_test) / sizeof(int);

	printf("Size of tab : %d\n", size_test);
	test_print_tab(tab_test, size_test);
	ft_sort_int_tab(tab_test, size_test);
	test_print_tab(tab_test, size_test);
	return (0);
}
