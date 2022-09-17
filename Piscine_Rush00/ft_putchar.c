/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:46:15 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/17 14:46:41 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char firstChar, char middleChar, int row)
{
	int	temp_row;

	temp_row = 0;
	while (temp_row < row)
	{
		if (temp_row == 0 || temp_row == (row - 1))
		{
			write(1, &firstChar, 1);
		}
		else
		{
			write(1, &middleChar, 1);
		}
		temp_row++;
	}
}
