/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:07:21 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 14:20:24 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (src[result] != '\0')
	{
		result++;
	}
	if (size < result)
	{
		return (result);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = 'f';
		i++;
	}
	dest[i] = '\0';
	return (result);
}

int	main(void)
{
	unsigned int	length;
	char	result[16];

	length = ft_strlcpy(result, "Hey salut toi!", 16);
	printf("Size : %d | Result : %s\n", length, result);
	return (0);		
}
