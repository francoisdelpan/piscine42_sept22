/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:59:33 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/05 19:06:20 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot13(char *str)
{
	int	i;
	char	temp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			temp = ((str[i] - 'A' + 13) % 26) + 'A';
			write(1, &temp, 1);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
                {
                        temp = ((str[i] - 'a' + 13) % 26) + 'a';
                        write(1, &temp, 1);
                }
		i++;
	}
}

int	main(int ac, char **av)
{
	(void) ac;
	ft_rot13(av[1]);
	return (0);
}
