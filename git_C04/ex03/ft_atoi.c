/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:23:21 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/23 10:38:19 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_correct(char c)
{
	if (
		(c != '\0' && c >= '0' && c <= '9')
		|| c == '+' || c == '-'
	)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	ctoi(char *c_to_convert, int c_length, int nbr_minus)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < c_length)
	{	
		result *= 10;
		result += (c_to_convert[i] - '0');
		i++;
	}
	if (nbr_minus % 2 == 1)
	{
		return (result * -1);
	}	
	return (result);
}

int	ft_atoi(char *str)
{
	char	char_result[10];
	int		nbr_minus;
	int		nbr_length;

	nbr_minus = 0;
	nbr_length = 0;
	while (is_correct(*str) == 1)
	{
		if (*str == '-')
		{
			nbr_minus += 1;
		}
		if (*str >= '0' && *str <= '9')
		{
			char_result[nbr_length] = *str;
			nbr_length++;
		}
		str++;
	}
	return (ctoi(char_result, nbr_length, nbr_minus));
}

int	main(void)
{
	char	test[] = "++---+2054878024sdffd45687";
	int	result;

	result = ft_atoi(test);
	printf("Char: %s | Int: %d", test, result);
	return (0);
}
