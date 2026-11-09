/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 08:57:02 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/09 09:12:29 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char) s[i] == (unsigned char) c)
			return ((unsigned char *)s + i);
		i++;
	}
	if ((unsigned char) s[i] == (unsigned char) c)
			return ((unsigned char *)s + i);
	return (NULL);
}