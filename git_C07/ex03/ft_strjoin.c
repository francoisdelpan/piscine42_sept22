/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:37:18 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/29 23:22:46 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	get_lengths(int size, char **strs, char *sep)
{
	int	i;
	unsigned int	result;

	i = 0;
	result = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		i++;
	}
	return (result + 1);
}

void	add_one(char *str, char *sep, int index, char *result)
{
	int	i;
	int	starting_index;

	i = 0;
	starting_index = ft_strlen(result);
	while (str[i] != '\0')
	{
		result[starting_index] = str[i];
		starting_index++;
		i++;
	}
	i = 0;
	if (index != -1)
	{
		while (sep[i] != '\0')
		{
			result[starting_index] = sep[i];
			starting_index++;
			i++;
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*main_result;
	int	i;
	int	index;

	if (size == 0)
		return ("");
	main_result = (char *)malloc(sizeof(char) * get_lengths(size, strs, sep));
	if (main_result == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < size)
	{
		if (i == size - 1)
			index = -1;
		add_one(strs[i], sep, index, main_result);
		i++;
	}
	index = ft_strlen(main_result);
	main_result[index] = '\0';
	return (main_result);
}

int	main(void)
{
	char	*test[3] = {"Police", "Salut babe", "Ici c'est Paris"};

	printf("%s\n", ft_strjoin(0, test, ":"));
	return (0);
}
