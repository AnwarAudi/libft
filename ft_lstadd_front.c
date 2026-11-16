/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 10:55:00 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 11:40:18 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *head = NULL;
// 	char a[] = "world";
// 	char b[] = "hello";
// 	ft_lstadd_front(&head, ft_lstnew(a));
// 	ft_lstadd_front(&head, ft_lstnew(b));

// 	printf("%s\n", (char *)head->content);
// 	printf("%s\n", (char *)head->next->content);
// 	return (0);
// }