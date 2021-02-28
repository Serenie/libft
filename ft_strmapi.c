/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 18:15:14 by tduong            #+#    #+#             */
/*   Updated: 2021/02/08 14:05:40 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*new;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new = NULL;
	if (!(new = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			new[i] = f(i, s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	else
		return (NULL);
}
