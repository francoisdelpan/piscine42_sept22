/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:58:28 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/30 14:20:25 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_nbr_word()

void	ft_split(char *str, char *charset)
{
	int	nbr_word;
	int	i;
	int	new_length;
	char	**result;

	nbr_word = get_nbr_word(str, charset);
	result = (char**)malloc(sizeof(char *) * (nbr_word + 1));
	if (result != NULL)
		return (NULL);
	i = 0;
	new_length = 0;
	while (i < nbr_word)
	{
		new_length = add_one(str, charset, result, i, new_length);
		if (new_length == - 1)
			return (NULL);
		i++;
	}
	result[i] = 0;
	return (result);
}
