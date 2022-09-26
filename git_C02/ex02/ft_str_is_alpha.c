/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 09:20:35 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 18:23:29 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 65 || *str > 90) && (*str < 97 || *str > 122))
		{
			// printf("%c\n", *str);
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	int	result;

	result = ft_str_is_alpha("HelloWorld");
	printf("Resultat %d\n", result);
}
