/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:41:47 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 15:06:13 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_np_to_hex(char c)
{
	char	hex[]
}

void	ft_putstr_non_printable(char *str)
{
	char	hex[16];
	char	result;
	int	i;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{	
				
		}
		else
		{
			write(1, &(str[i]), 1)
		}
	}
}

int	main(void)
{
	char	test[] = "Salut\ncomment\\vas-tu ?";
	ft_putstr_non_printable(test);
	return (0);
}
