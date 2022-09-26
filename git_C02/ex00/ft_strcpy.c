/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:15:40 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 18:15:49 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		printf("%c\n", src[i]);
		dest[i] = src[i];
		i++;
		printf("src : %c, dest : %c\n", src[i], dest[i]);
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest_test[100];
	char	*print_test;

	print_test = ft_strcpy(dest_test, "Hello World!");
	printf("\n%s", print_test);
	return (0);
}
