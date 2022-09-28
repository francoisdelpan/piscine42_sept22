/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpannier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:07:21 by fpannier          #+#    #+#             */
/*   Updated: 2022/09/28 19:56:17 by fpannier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	result;
	unsigned int	i;

	i = 0;
	result = 0;
	while (src[result] != '\0')
	{
		result++;
	}
	if (size < result)
	{
		return (result);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size - 1)
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (size);
}
