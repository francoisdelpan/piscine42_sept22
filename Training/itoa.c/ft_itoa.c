/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:55:43 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/06 22:34:03 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	get_length(int nbr)
{
	int	i;

	i = 1;
	while (nbr >= 10)
	{
		i++;
		nbr /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int nbr)
{
	int		nbr_len;
	int		is_minus;
	unsigned int	abs_number;
	char	*result;

	is_minus = 0;
	abs_number = nbr;
	if (nbr < 0)
	{
		is_minus = 1;
		abs_number = nbr * -1;
	}
	nbr_len = get_length(abs_number);
	result = (char *)malloc(sizeof(char) * (nbr_len + is_minus));
	if (result == NULL)
		return (NULL);
	if (is_minus == 1)
		result[0] = '-';
	result[nbr_len - 1 + is_minus] = '\0';
	while (nbr_len - 2 + is_minus >= is_minus)
	{
		printf("index: %d\n", nbr_len - 2 + is_minus);
		result[nbr_len - 2 + is_minus] = (abs_number % 10) + '0';
		abs_number /= 10;
		nbr_len--;
	}
	return (result);
}

int	main(int ac, char **av)
{
	(void) ac;
	printf("%s\n", ft_itoa(atoi(av[1])));
	return (0);
}
