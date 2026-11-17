/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:12:03 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/17 14:08:13 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if ((*lst) == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main(void)
// {
// 	t_list *a;
// 	t_list *b;
// 	t_list *c;

// 	a = ft_lstnew("hello");
// 	b = ft_lstnew("new");
// 	c = ft_lstnew("world");
// 	a->next = b;
// 	ft_lstadd_back(&a, c);
// 	printf("%s", ft_lstlast(a)->content);
// }