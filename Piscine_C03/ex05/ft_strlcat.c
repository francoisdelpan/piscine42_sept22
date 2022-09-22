/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 08:14:43 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/22 08:55:13 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	length_dest;
	unsigned int	length_src;

	length_dest = 0;
	length_src = 0;
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	if (length_dest > size)
	{
		// Probleme
		printf("Probleme\n");
	}
	while (length_dest < size && src[length_src] != '\0')
	{
		dest[length_dest] = src[length_src];
		length_dest++;
		length_src++;
	}
	dest[length_dest] = '\0';
	return length_dest + 1;
}

int	main(void)
{
	char	test[1500] = "Police\0";
	unsigned int	result;

	result = ft_strlcat(test, "Department", 9);
	printf("%s | %d\n", test, result);
	return (0);
}
