/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:19:43 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 10:40:25 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*char	*ft_strupcase(char *str)
{
	printf("%s\n", str);
	while (*str != '\0')
	{
		printf("%c, ", *str);
		str++;
	}
	return (str);
}*/

char	*ft_returnstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		printf("%c\n", *str);
		i++;
	}
}
int	main(void)
{
	char	*result;

	result = "Miami Dade Police Department";

	result = ft_returnstr(result);
	printf("\n%s\n", result);
	return (0);
}
