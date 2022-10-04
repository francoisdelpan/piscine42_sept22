/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:34:35 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/04 12:51:47 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_params(char **params, int size)
{
	int	i;
	int	j;
	int	c;
	char 		*temp;

	i = 0;
	j = 0;
	c = 0;
	while (i < size)
	{
		while (j < size - 1)
		{
			while (params[j][c] != '\0' && params[j + 1][c] != '\0'
				&& params[j][c] == params[j + 1][c])
				c++;
			if (params[j][c] > params[j + 1][c])
			{
				temp = params[j];
				params[j] = params[j + 1];
				params[j + 1] = temp;
			}
			j++;
			c = 0;
		}
		i++;
		j = 0;
	}
}

void	print_params(char *param)
{
	while (*param)
	{
		write(1, param, 1);
		param++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	char	*samples[argc - 1];
	int	i;

	i = 1;
	while (i < argc)
	{
		samples[i - 1] = argv[i];
		i++;
	}
	sort_params(samples, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		print_params(samples[i]);
		i++;
	}
	return (0);
}
