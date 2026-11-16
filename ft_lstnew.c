/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:28:18 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 10:48:37 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	char content[] = "hello";
// 	t_list *node;
// 	node = ft_lstnew((void *)&content);
// 	printf("%s", (char *)node->content);
// }