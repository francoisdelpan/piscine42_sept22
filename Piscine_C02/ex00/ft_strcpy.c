/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:15:40 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/19 14:06:53 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strcpy(char *dest, char *src)
{
	while(*src != '\0')
	{
		printf("%c\n", *src);
		*dest = *src;
		dest++;
		src++;
		printf("src : %s, dest : %s\n", src, dest);
	}
	*dest = '\0';
}

int	main(void)
{
	char	dest_test[100];
	char	*src_test;

	src_test = "Hello World!";
	ft_strcpy(dest_test, src_test);
	printf("\n%s", dest_test);
	return (0);
}
