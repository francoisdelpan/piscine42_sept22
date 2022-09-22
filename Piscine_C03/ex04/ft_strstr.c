/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:50:26 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/22 08:09:47 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	length_to_find;
	int	i;

	length_to_find = 0;
	while (to_find[length_to_find] != '\0')
	{
		length_to_find++;
	}
	i = 0;
	while (*str != '\0')
	{
		while (to_find[i] != '\0' && *str == to_find[i])
		{
			i++;
			str++;
		}
		if (i == length_to_find)
		{
			return (str - length_to_find);
		}
		i = 0;
		str++;
	}
	return (NULL);
}

int	main (void)
{
	char	find[1500] = "dfde\0";
	char	*result;
	
	result = ft_strstr("Miami Dade Police Department", find);
	if (result)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("NULL");
	}
	return (0);
}
