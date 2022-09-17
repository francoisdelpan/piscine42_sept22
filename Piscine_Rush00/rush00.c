/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:17:34 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/17 10:38:27 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>



void	ft_putchar(char firstChar, char middleChar, int row)
{
	int	tempRow;

	tempRow = 0;
	while (tempRow < row)
	{
		if (tempRow == 0 || tempRow == (row - 1))
		{
			write(1, &firstChar, 1);
		}
		else
		{
			write(1, &middleChar, 1);
		}
		tempRow++;
	}
}

void	rush(int row, int line)
{
	int	tempLine;

	tempLine = 0;
	while (tempLine < line)
	{
		if (tempLine == 0)	// Si il s'agit de la premiere ligne
		{
			ft_putchar('A', 'B', row);
		}

		else if(tempLine == (line - 1))	// S'il s'agit de la derniere ligne
		{
			ft_putchar('C', 'B', row);
		}
		else
		{		// S'il s'agit d'une des lignes du milieu
			ft_putchar('B', ' ', row);
		}
		write(1, "\n", 1);
		tempLine++;
	}
}

int	main(void)
{
	rush(5, 1);
	return (0);
}
