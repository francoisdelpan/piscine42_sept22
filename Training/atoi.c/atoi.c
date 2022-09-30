/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:52:13 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/30 13:51:41 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	nbr_minus;
	int	result;

	nbr_minus = 0;
	result = 0;
	while (*str && ((*str >= 9 && *str <= 13) || *str == 32 || *str == '-' || *str == '+'))
	{
		if (*str == '-')
			nbr_minus += 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	if (nbr_minus % 2 == 1)
		return (result * -1);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("    --++-1548fdal54698545313fddf"));
	return (0);
}
