/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:45:50 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/20 09:16:31 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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
	return (dest);

}

int	main(void)
{
	int	size;
	char	d[15];
	char	*test;
	int	i;

	size = 15;
	test = ft_strncpy(d, "Hello World!", size);

	i = 0;
	while (i < size)
	{
		printf("%c", test[i]);
		i++;
	}
	return (0);
}
