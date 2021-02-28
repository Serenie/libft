/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:13:34 by tduong            #+#    #+#             */
/*   Updated: 2021/02/08 14:28:27 by tduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (str1 == str2 || n == 0)
		return (0);
	while ((str1[i] != '\0' && str2[i] != '\0') &&
			(str1[i] == str2[i]) && (i < n - 1))
		i++;
	if (n > 0)
		return (str1[i] - str2[i]);
	else
		return (0);
}
