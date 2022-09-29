/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:23:32 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/30 01:25:16 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_contain_in(char char_to_test, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == char_to_test)
			return (1);
		i++;
	}
	return (0);
}

int	get_number_of_words(char *str, char *charset)
{
	int	nbr_words;
	int	i;

	nbr_words = 0;
	i = 1;
	while (str[i] != '\0')		// Pour chaque caractere
	{
		if (is_contain_in(str[i], charset)	// Si le char is into charset
			&& !(is_contain_in(str[i - 1], charset)))	// Et que le caractere d'avant n'est pas deja un charset
			nbr_words++;		// Ca fera un mot de plus
		i++;
	}
	if (!(is_contain_in(str[i], charset)))
		nbr_words++;
	return (nbr_words);
}

int	add_one(char **dest, int index ,char *str, char *charset)
{
	int	size_new_word;
	int	i;

	size_new_word = 0;
	/*while (str[size_new_word] != '\0'
		&& !(is_contain_in(str[size_new_word], charset)))
	{
		size_new_word++;
	}*/
	while (str[size_new_word] != '\0')
	{
		printf("%c\n", str[size_new_word]);
		size_new_word++;
	}		// give up
	dest[index] = (char *)malloc(sizeof(char) * size_new_word);
	if (dest[index] == NULL)
		return (0);
	i = 0;
	while (i < size_new_word)
	{
		printf("str: %c\n", *str);
		dest[index][i] = *str;
		str++;
		i++;
	}
	while (*str != '\0' || is_contain_in(*str, charset))
	{
		str++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**main_result;
	int	nbr_words;
	int	i;

	nbr_words = get_number_of_words(str, charset);
	printf("nbr_words: %d\n", nbr_words);
	main_result = (char **)malloc(sizeof(char *) * (nbr_words + 1));		// +1 parce que termine 0
	if (main_result == NULL)
		return (NULL);
	i = 0;
	while (i < nbr_words)
	{
		printf("i ft_split: %d\n", i);
		if (!(add_one(main_result, i, str, charset)))
			return (NULL);
		i++;
	}
	main_result[i] = 0;
	return (main_result);
}

int	main(void)
{
	int	i;
	char	**test = ft_split("Miamia Dade Police Dept.", " ");

	i = 0;
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}
