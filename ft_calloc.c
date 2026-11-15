/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:54:15 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/13 16:19:16 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*a;
	size_t	total;
	size_t	i;

	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	total = nmemb * size;
	a = malloc(total);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = ft_calloc(3, 1);
// 	printf("%p",str);
// }
