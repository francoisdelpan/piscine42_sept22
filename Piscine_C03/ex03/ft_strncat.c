/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:56:55 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/22 07:48:32 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *str, unsigned int nb)
{
	int	size_dest;

	size_dest = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (nb > 0)
	{
		dest[size_dest] = *str;
		str++;
		size_dest++;
		nb--;
	}
	dest[size_dest] = '\0';
	return (dest);
}

int	main(void)
{
	char	result[1500] = "Bonsoir ";

	ft_strncat(result, "Ines Gauthier", 8);
	printf("Resultat : %s", result);
	return (0);
}
