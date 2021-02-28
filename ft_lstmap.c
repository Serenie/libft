/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:44:38 by tduong            #+#    #+#             */
/*   Updated: 2021/02/08 12:56:00 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*first;

	if (!lst)
		return (NULL);
	if (!(dst = ft_lstnew(f(lst->content))))
		return (NULL);
	first = dst;
	while (lst)
	{
		if (lst->next)
		{
			if (!(dst->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&first, del);
				return (NULL);
			}
			dst = dst->next;
		}
		lst = lst->next;
	}
	dst->next = NULL;
	return (first);
}
