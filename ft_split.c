/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:19:52 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/13 23:16:06 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	word_count(const char *str, char sep)
{
	size_t	i;
	size_t	count;
	int		flag;

	i = 0;
	count = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if(str[i] == sep)
			flag = 1;
		if(str[i] != sep && flag == 1)
		{
			count++;
			flag = 0;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**arr;

	arr = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (k < word_count(s, c))
	{
		while (s[i] == c)
			i++;				
		j = i;
		while ((s[j] != c) && s[j])
			j++;
		arr[k] = ft_substr(s, i, j - i);
		k++;
		i = j;
	}
	arr[k] = NULL;
	return (arr);
}

// int	main(void)
// {
// 	//char const *str = " hello world 4567 ";
// 	//char c = ' ';
// 	char **alissa = ft_split("  tripouille  42  ", ' ');
// 	for (size_t i = 0; i < 6; i++)
// 	{
// 		printf("%s\n", alissa[i]);
// 	}
// }