/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:56:03 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/29 18:30:21 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	size_dest;

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	printf("size_dest: %d | *src: %c\n", size_dest, *src);
	while (*src != '\0')
	{
		printf("size_dest: %d | *src: %c | dest: %s\n", size_dest, *src, dest);
		dest[size_dest] = *src;
		src++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (dest);
}

int	main(void)
{
	char	result[3] = "ABA";

	ft_strcat(result, "ABBSG");
	printf("result : %s\n", result);
	return (0);
}
/*
	/!\ Dest doit avoir une taille suffisante pour accueillir dest + src
*/
