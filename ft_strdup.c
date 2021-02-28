/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:24:47 by tduong            #+#    #+#             */
/*   Updated: 2021/02/07 15:19:21 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		len;

	dest = (char*)s1;
	dest = NULL;
	len = ft_strlen(s1);
	if (!(dest = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(dest, s1, len);
	dest[len] = '\0';
	return (dest);
}
