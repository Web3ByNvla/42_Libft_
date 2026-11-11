/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 09:55:36 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/09 10:09:03 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*src;

	i = 0;
	src = (const unsigned char *)s;
	while(i < n)
	{
		if(src[i] == (unsigned char) c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}