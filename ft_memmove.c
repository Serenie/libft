/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:19:30 by tduong            #+#    #+#             */
/*   Updated: 2021/02/07 13:32:16 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	if (a == b || (a == NULL && b == NULL))
		return (a);
	if (b < a)
	{
		while (len--)
		{
			a[len] = b[len];
		}
	}
	else
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	return (a);
}
