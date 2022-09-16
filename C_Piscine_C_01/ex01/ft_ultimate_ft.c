/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:06:05 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/16 13:15:41 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	integer;
	int	*p0;
	int	**p1;
	int	***p2;
	int	****p3;
	int	*****p4;
	int	******p5;
	int	*******p6;
	int	********p7;
	int	*********p8;
	
	integer = 45;
	p0 = &integer;
	p1 = &p0;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	
	printf("%d", integer);
	ft_ultimate_ft(p8);
	printf("%d", integer);
	// printf("%d", *********p8);
	return (0);
}
