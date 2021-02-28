/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:45:44 by tduong            #+#    #+#             */
/*   Updated: 2021/02/07 13:59:43 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char*)s;
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return (str + i);
		}
		i++;
	}
	if (str[i] == (char)c)
		return (str + i);
	return (NULL);
}
