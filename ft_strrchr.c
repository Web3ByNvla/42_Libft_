/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:14:20 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/16 13:46:01 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (!*s)
		return (NULL);
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if ((char)c == s[i])
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}
