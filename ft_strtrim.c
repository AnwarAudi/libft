/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 17:53:04 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/13 23:42:01 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip(char const to_skip, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == to_skip)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	k;

	start = 0;
	while (s1[start] != '\0' && skip(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && skip(s1[end - 1], set))
		end--;
	str = malloc((end - start + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (start < end)
	{
		str[k] = s1[start];
		start++;
		k++;
	}
	str[k] = '\0';
	return (str);
}

// int main(void)
// {
// 	char *s1 = "ali is ali";
// 	char *set = "ali";
// 	printf("%s", ft_strtrim(s1, set));
// }
