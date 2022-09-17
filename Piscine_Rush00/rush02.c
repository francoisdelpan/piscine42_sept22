/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:24:34 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/17 13:29:07 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush02.h"
#include "ft_putchar.h"

void	rush02(int line, int row)
{
	int	temp_line;

	temp_line = 0;
	while (temp_line < row)
	{
		if (temp_line == 0)
		{
			ft_putchar('A', 'B', row);
		}
		else if (temp_line == (row - 1))
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
