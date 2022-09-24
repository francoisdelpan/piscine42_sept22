/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:38:09 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/24 16:06:54 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/**
 * This function print an int tab.
 * DEV_ONLY 
 *
 * @params : int tab to print
 * @return : nothing
 */

void    int_tab_print(int *to_print)
{
	int     i;

	i = 0;
	while (to_print[i] != '\0')
	{
		printf("%d, ", to_print[i]);
		i++;
	}
	printf("\n");
}

int	get_tab_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_length(int *clues_to_test, int board_length)
{
	int	clues_length;

	clues_length = sizeof(clues_to_test) / sizeof(int *);
	printf("clues size: %d\n", clues_length);
	if (clues_length == (board_length * 4))
	{
		return (1);
	}
	return (0);
}

int	check_str(char *str, int *board_length, int *clues_to_test)
{
	int	str_length;
	int	i;

	str_length = get_tab_length(str);
	i = 0;
	if ((str_length + 1) % 8 == 0
		&& str_length >= 16
		&& str_length <= 72)
	{
		*board_length = (str_length + 1) / 8;
		printf("Length board : %d\n", *board_length);
		while (i < str_length)
		{
			if (i % 2 == 0
				&& str[i] >= '1'
				&& str[i] <= *board_length)
			{
				clues_to_test[i / 2] = str[i] - '0';
			}
			i++;
		}
		return (check_length(clues_to_test, *board_length));
	}
	return (0);
}

/**
 * Main function of parsing argv
 *
 * @params : argc, argv directly from main
 * @return : 0 if the string is unavailable
 *	     1 if the string is available
 */

int	*parsing(int argc, char *argv[])
{
	int	board_length;
	int	*p_board_length;
	int	clues[72];
	int	result;

	board_length = 0;
	p_board_length = &board_length;
	if (argc == 2)
	{
		result = check_str(argv[1],  p_board_length, clues);
		if (result == 0)
		{
			write(2, "HereError\n", 10);
		}
		return (clues);
	}
	write(2, "ThereError\n", 11);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	result[] = parsing(argc, argv);
	int_tab_print(result);
	return (0);
}
