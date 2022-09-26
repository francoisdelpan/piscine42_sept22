/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:00:40 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/16 09:46:09 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P\n", 2);
	}
	else
	{
		write(1, "N\n", 2);
	}
}

int	main(void)
{
	ft_is_negative(1);
	ft_is_negative(150);
	ft_is_negative(-1);
	ft_is_negative(0);
	return (0);
}
