/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:44:09 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/17 16:08:10 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	index;
	char	result;

	index = 0;
	result = *str[index];
	while (result != "\0")
	{
		
	}
}

int	main(void)
{
	char	*hello;

	*hello = "Hello World!";
	ft_putstr(*hello);
}
