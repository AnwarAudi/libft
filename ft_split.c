/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:19:52 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/18 13:08:51 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	free_all(char **arr, size_t n)
{
	while (n > 0)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static char	**fill(char **arr, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (k < words)
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != '\0' && s[j] != c)
			j++;
		arr[k] = ft_substr(s, i, j - i);
		if (arr[k] == NULL)
		{
			free_all(arr, k);
			return (NULL);
		}
		i = j;
		k++;
	}
	arr[k] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (fill(arr, s, c, words));
}

// int	main(void)
// {
// 	char	**res;
// 	int		i;

// 	res = ft_split("hello world 42", ' ');
// 	i = 0;
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (0);
// }