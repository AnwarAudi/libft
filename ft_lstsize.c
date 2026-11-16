/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 11:25:58 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 12:08:30 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;

// 	a = ft_lstnew("hello");
// 	b = ft_lstnew("new");
// 	c = ft_lstnew("world");
// 	a->next = b;
// 	b->next = c;
// 	printf("%d", ft_lstsize(a));
// }
