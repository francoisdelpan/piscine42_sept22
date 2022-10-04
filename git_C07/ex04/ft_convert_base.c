/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:12:46 by fpannier          #+#    #+#             */
/*   Updated: 2022/10/04 18:44:48 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	is_base_correct(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127)
			return (0);
		while (base[i] && base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

/*
1548 => 4 digit en base 10
60C => 3 digit en base 16
11000001100 => 11 digit en base 2

*/

char	*ft_convert_base(char *nbr, char *base_form, char *base_to)
{
	if (is_base_correct(base_from) == 0 || is_base_correct(base_to) == 0)
		return (NULL);
	
}

int	main(int ac, char **av)
{
	ft_convert_base(av[1], av[2], av[3]);
	return (0);
}
