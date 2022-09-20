/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:23:10 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/20 16:43:20 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	temp;
	while (*str != '\0')
	{
		printf("%s\n", str);
		if (*str >= 97 && *str <= 122)
		{
			printf("test\n");
			temp = *str - 32;
			*str = temp;
			printf( "%c\n",temp);
			printf( "%s\n", str);
		}
		str++;
	}
	return (str);
}

int	main(void)
{
	char	*result;

	result = "sfdlkjsbhfdjkljfsldkjHHHHfdk84";
	result = ft_strupcase(result);

	printf("%c\n", *result);
	printf("%s\n", result);
	return (0);
}
