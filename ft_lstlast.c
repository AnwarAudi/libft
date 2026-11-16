/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:56:39 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 12:21:05 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (lst == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

// int	main(void)
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;

// 	a = ft_lstnew("hello");
// 	b = ft_lstnew("new");
// 	c = ft_lstnew("world");
// 	a->next = b;
// 	b->next = c;
// 	printf("%s", (char *)ft_lstlast(a)->content);
// }