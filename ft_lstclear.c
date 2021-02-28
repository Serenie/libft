/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 13:26:10 by tduong            #+#    #+#             */
/*   Updated: 2021/02/07 11:21:21 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *old;

	while (*lst)
	{
		del((*lst)->content);
		old = *lst;
		*lst = old->next;
		free(old);
	}
	*lst = NULL;
}
