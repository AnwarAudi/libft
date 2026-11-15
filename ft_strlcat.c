/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:26:21 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/13 23:46:52 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	n = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		n++;
	}
	if (size <= i)
		return (n + size);
	while ((src[j] != '\0') && ((j + i) < (size - 1)))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + n);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "hello";
// 	char dest[7] = "wolrd";
// 	printf ("%i\n", ft_strlcat(dest, str, 7));
// 	printf ("%s\n", dest);
// }