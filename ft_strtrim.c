/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 08:33:51 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/24 14:10:25 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, const char *charset)
{
	int		i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	if (ft_strlen(s1) >= 1)
		end = ft_strlen(s1) - 1;
	else
		end = -1;
	while (is_charset(s1[start], set) && s1[start] != '\0')
		start++;
	while (end >= 0 && is_charset(s1[end], set))
		end--;
	buffer = ft_substr(s1, start, end - start + 1);
	return (buffer);
}
