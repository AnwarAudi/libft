/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:16:31 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 22:15:10 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*a1;
	void	*b;

	a = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		b = f(lst->content);
		a1 = ft_lstnew(b);
		if (b == NULL)
		{
			del(b);
			ft_lstclear(&a, del);
			return (NULL);
		}
		ft_lstadd_back(&a, a1);
		lst = lst->next;
	}
	return (a);
}
