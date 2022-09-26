/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:38:09 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/24 19:38:35 by fpannier         ###   ########.fr       */
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
	while (to_print[i])
	{
		printf("%d, ", to_print[i]);
		i++;
	}
	printf("\n");
}

/**
 * Count and return length of a char list
 *
 * @parent : check_str()
 * @param : any char list
 * @return : length of the char list
 */

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

/**
 * Check the munber of 1, 2, 3, 4
 * Exemple : more than four 4 is forbidden
 *
 * @parent : check_length()
 * @params : list of digit count
 * @return : 1 if the conditions are respected
 *	     0 otherwise
 * -> Go back to the main
 */

int	check_digit(int *digits)
{
	if (
		digits[3] <= 4 && digits[2] <= 8
		&& digits[1] <= 12 && digits[0] <= 12
		&& (digits[0] + digits[1] + digits[2]
		+ digits[3] == 16)
	)
	{
		return (1);
	}
	return (0);
}

/**
 * Check the clues length, count of many 1, 2, 3 & 4 there is
 * 
 * @parent : check_str()
 * @params : clues 
 * @return : 0 if the size != 16
 *	     check_digit() for further investigation 
 */

int	check_length(int *clues_to_test)
{
	int	clues_length;
	int	digit_nbr[4] = {0, 0, 0, 0};

	clues_length = 0;
	while (clues_to_test[clues_length])
	{
		digit_nbr[clues_to_test[clues_length] - 1] += 1;
		clues_length++;
	}
	// printf("clues size: %d\n", clues_length);
	// int_tab_print(digit_nbr);
	if (clues_length == 16)
	{
		return check_digit(digit_nbr);
	}
	return (0);
}

/**
 * Check the string comming from argv[1]
 * 
 * @parent : parsing()
 * @params : argv[1], clues to fill
 * @return : 0 if false
 *	     check_length() for further investigation
 */

int	check_str(char *str, int *clues_to_test)
{
	int	str_length;
	int	i;

	str_length = get_tab_length(str);
	printf("str_length : %d\n", str_length);
	i = 0;
	if ( str_length == 31)
	{
		while (i < str_length)
		{
			if (i % 2 == 0
				&& str[i] >= '1'
				&& str[i] <= '4')
			{
				clues_to_test[i / 2] = str[i] - '0';
				printf("str[i] : %d | -0 : %d\n", str[i], str[i] - 48);
				int_tab_print(clues_to_test);
			}
			i++;
		}
		return (check_length(clues_to_test));
	}
	return (0);
}

/**
 * Main function of parsing argv
 *
 * @parent : main()
 * @params : argc, argv directly from main, pointer of clues
 * @return : 0 if the string is unavailable
 *	     1 if the string is available
 */

int	parsing(int argc, char *argv[], int *p_clues)
{
	int	result;

	if (argc == 2)
	{
		result = check_str(argv[1], p_clues);
		if (result == 1)
		{
			return (1);
		}
	}
	write(2, "Error\n", 6);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	clues[17] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int	result;

	result = parsing(argc, argv, clues);
	printf("result: %d\n", result);
	int_tab_print(clues);
	return (0);
}
