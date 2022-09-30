/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:23:32 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/30 09:08:39 by fpannier         ###   ########.fr       */
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

int	add_one(char **dest, int result_index, int str_index, char *str, char *charset)
{
	int	size_new_word;
	int	i;

	size_new_word = 0;
	while (str[str_index + size_new_word] != '\0'
		&& is_contain_in(str[str_index + size_new_word], charset) == 0)
	{
		size_new_word++;
	}
	printf("Size new word : %d\n", size_new_word);
	dest[result_index] = (char *)malloc(sizeof(char) * size_new_word);
	if (dest[result_index] == NULL)
		return (0);
	i = 0;
	printf("str_index: %d\n", str_index);
	while (i < size_new_word)
	{
		printf("str: %c\n", str[str_index]);
		dest[result_index][i] = str[str_index];
		str_index++;
		i++;
	}
	while (str[str_index] != '\0' && is_contain_in(str[str_index], charset))
	{
		str_index++;
	}
	return (str_index);
}

char	**ft_split(char *str, char *charset)
{
	char	**main_result;
	int	nbr_words;
	int	main_result_index;
	int	str_index;

	nbr_words = get_number_of_words(str, charset);
	printf("nbr_words: %d\n", nbr_words);
	main_result = (char **)malloc(sizeof(char *) * (nbr_words + 1));		// +1 parce que termine 0
	if (main_result == NULL)
		return (NULL);
	main_result_index = 0;
	str_index = 0;
	while (main_result_index < nbr_words)
	{
		printf("i ft_split: %d\n", main_result_index);
		str_index = add_one(main_result, main_result_index, str_index, str, charset);
		if (str_index == 0)
			return (NULL);
		main_result_index++;
	}
	main_result[main_result_index] = 0;
	return (main_result);
}

int	main(void)
{
	int	i;
	char	**test = ft_split("Miami   io   Dade Police   Dept.", " ");

	i = 0;
	while (test[i] != 0)
	{
		printf("%s\n", test[i]);
		i++;
	}
	return (0);
}
