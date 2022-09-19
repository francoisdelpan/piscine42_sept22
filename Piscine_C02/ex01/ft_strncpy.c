/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:45:50 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/19 19:13:06 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > (sizeof(src) / sizeof(int)))
	{
		printf("%d\n", n);
		while (*src != '\0')
		{
			dest[i] = *src;
			src++;
			i++;
		}
		while (i < n)
		{
			dest[i] = 'f';
			i++;
		}
	}
}

int	main(void)
{
	int	size;
	char	d[1];
	int	i;

	size = 1;
	ft_strncpy(d, "Hello World!", size);

	i = 0;
	while (i < size)
	{
		printf("%c", d[i]);
		i++;
	}
	return (0);
}
