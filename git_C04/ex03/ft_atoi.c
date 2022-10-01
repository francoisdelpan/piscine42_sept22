/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:02:09 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/01 10:11:44 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	nbr_minus;

	result = 0;
	nbr_minus = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32))
	{
		str++;
	}
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			nbr_minus++;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	if (nbr_minus % 2 == 1)
		return (result * -1);
	return (result);
}

int	main(int ac, char *av[])
{
	(void) ac;
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}
