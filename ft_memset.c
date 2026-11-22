/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 12:53:32 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/22 13:23:13 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)str;
	i = 0;
	if (!str)
		return (NULL);
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	unsigned char s[10] = "hello";
// 	printf("%s", ft_memset(s, 'x', 3));
// }