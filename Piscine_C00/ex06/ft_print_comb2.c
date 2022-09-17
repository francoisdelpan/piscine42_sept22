/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:18:35 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/15 17:02:05 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_number_of_digits(int numberToTest)
{	
	int	numberOfDigits;
	
	numberOfDigits = 0;
	while (numberToTest > 0)
	{
		numberOfDigits++;
		numberToTest /= 10;
	}
	if (numberOfDigits == 0)
	{
		return 1;
	}
	return numberOfDigits;	
}

void	print_digit_to_char(int digit)
{
	char 	digitToChar;

	digitToChar = digit + '0';
	write(1, &digitToChar, 1);
}

int	my_pow(int digit, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result*= digit;
		power--;
	}
	return result;
}

void	print_int_number(int numberToPrint)
{
	int	numberOfPrints;
	int	digitToPrint;

	numberOfPrints = get_number_of_digits(numberToPrint);
	if (numberOfPrints == 1)
	{
		write(1, "0", 1);
	}
	while (numberOfPrints > 1)
	{
		digitToPrint = numberToPrint / my_pow(10, (numberOfPrints-1));	
		print_digit_to_char(digitToPrint);
		numberToPrint = numberToPrint % my_pow(10, (numberOfPrints-1));
		numberOfPrints--;
	}
	print_digit_to_char(numberToPrint);
}

void	print_formated(int a, int b)
{
	print_int_number(a);
	write(1, " ", 1);
	print_int_number(b);
	if (! (a == 98 && b == 99) )
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;

	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a != b && a < b)
			{
				print_formated(a, b);
			}
			b++;
		}
		a++;
		b = 0;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
