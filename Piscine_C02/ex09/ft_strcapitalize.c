/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:05:38 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 12:44:33 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}
	i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			printf("Current : %c, before : %c\n", str[i], str[i - 1]);
			if ((str[i - 1] < 48 || str[i - 1] > 57) && 
				(str[i - 1] < 65 || str[i - 1] > 90) && 
				(str[i - 1] < 97 || str[i - 1] > 122))
			{
				printf("%c\n", str[i]);
				str[i] -= 32;
			}
		}
		i++;
	}
	return str;
}

int	main(void)
{
	char	result[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(result);
	printf("%s\n", result);
}
