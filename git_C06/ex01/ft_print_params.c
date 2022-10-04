/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:17:17 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/03 00:11:09 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(char *param)
{
	while (*param)
	{
		write(1, param, 1);
		param++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char  *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		print_params(argv[i]);
		i++;
	}
	return (0);
}
