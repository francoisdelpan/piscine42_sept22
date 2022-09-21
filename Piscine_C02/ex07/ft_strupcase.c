/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 08:28:03 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 10:03:04 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			printf("%c, ", *str);
			*str = 48;
		}
		str++;
		i++;
	}
	return (str - i);
}

int	main(void)
{
	char	*test = "Hello World!";
	char	*result;	
	
	result = ft_strupcase(test);
	printf("\n%s\n", result);
	return (0);
}
