/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:35:52 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/16 14:49:44 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int	main(void)
{
	int	a1;
	int	b1;
	int	div1;
	int	mod1;

	a1 = 142;
	b1 = 10;
	div1 = 0;
	mod1 = 0;
	ft_div_mod(a1, b1, &div1, &mod1);
	printf("%d, %d", div1, mod1);
	return (0);
}
