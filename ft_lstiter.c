/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudi <aaudi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 17:10:56 by aaudi             #+#    #+#             */
/*   Updated: 2026/11/16 17:14:52 by aaudi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*a;

	a = lst;
	if (lst == NULL || f == NULL)
		return ;
	while (a != NULL)
	{
		f(a->content);
		a = a->next;
	}
}
