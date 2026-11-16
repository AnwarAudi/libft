/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 11:19:52 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 22:44:59 by aaudi            ###   ########.fr       */
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

static char	*get_word(char const *s, char c, size_t *i)
{
	size_t	start;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] != '\0' && s[*i] != c)
		(*i)++;
	return (ft_substr(s, start, *i - start));
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	words;
	char	**arr;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (k < words)
	{
		arr[k] = get_word(s, c, &i);
		if (arr[k] == NULL)
		{
			free_all(arr, k);
			return (NULL);
		}
		k++;
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