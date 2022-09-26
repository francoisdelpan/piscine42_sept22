/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:41:47 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/21 15:24:00 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_np_to_hex(char c)
{
	char	*hex;
	int	result;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	result = c / 16 + 48;
	write(1, &result, 1);
	result = c % 16;
	write(1, &hex[result], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			printf("%c", str[i]);
			ft_np_to_hex(str[i]);			
		}
		else
		{
			write(1, &(str[i]), 1);
		}
		i++;
	}
}

int	main(void)
{
	char	test[] = "Salut\ncomment\\vas-tu ?";
	ft_putstr_non_printable(test);
	return (0);
}
