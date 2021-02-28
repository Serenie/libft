/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:14:12 by tduong            #+#    #+#             */
/*   Updated: 2021/02/07 14:27:05 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	int		i;

	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	while (src[i] && (dstsize - d_len - 1) && dstsize)
	{
		dst[d_len + i] = src[i];
		i++;
		dstsize--;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
