/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:23:10 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/20 10:29:45 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 || *str <= 122)
		{
			*str = *str - 32;
		}
		str++;
	}
	return str	
}

int	main(void)
{
	char	*result;

	result = fr_strupcase(char *str);
	printf("%s\n", result);
	return (0);
}
