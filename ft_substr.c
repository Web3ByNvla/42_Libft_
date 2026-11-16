/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 20:47:38 by novella           #+#    #+#             */
/*   Updated: 2026/11/10 10:37:02 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	sub_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	sub_len = 0;
	if ((size_t)start < s_len)
	{
		sub_len = s_len - start;
		if (sub_len > len)
			sub_len = len;
	}
	sub = malloc(sizeof(char) * (sub_len + 1));
	if (!sub)
		return (NULL);
	if ((size_t)start < s_len)
		ft_strlcpy(sub, s + start, sub_len + 1);
	else
		sub[0] = '\0';
	return (sub);
}
