/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:24:34 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/17 14:56:08 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char firstChar, char middleChar, int row);

void	rush02(int row, int line)
{
	int	temp_line;

	temp_line = 0;
	while (temp_line < line)
	{
		if (temp_line == 0)
		{
			ft_putchar('A', 'B', row);
		}
		else if (temp_line == (line - 1))
		{
			ft_putchar('C', 'B', row);
		}
		else
		{
			ft_putchar('B', ' ', row);
		}
		write(1, "\n", 1);
		temp_line++;
	}
}
