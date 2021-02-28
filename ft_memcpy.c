/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:36:45 by tduong            #+#    #+#             */
/*   Updated: 2021/02/08 14:23:15 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	if (!dst && !src)
		return (dst);
	s1 = (char*)src;
	s2 = (char*)dst;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
