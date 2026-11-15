/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:37:29 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/13 23:46:17 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (src[n])
		n++;
	if (size == 0)
		return (n);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
// #include <stdio.h>
// int main(void)
// {
// 	char src[] = "hello";
// 	char dest[7];
// 	printf ("%zu\n", ft_strlcpy(dest, src, 5));
// 	printf ("%s\n", dest);
// }