/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 08:33:51 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/10 09:06:25 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include "stdlib.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	char	*buffer;
	size_t	i;
	size		y;
	int		len;
	
	str1 = (char *) s1;
	buffer = malloc((ft_strlen(s1) - ft_strlen(set) + 1) * sizeof(char));
	len = ft_strlen(s1);
	if (!buffer)
		return (NULL);
	
	while (i < len)
	{
		y = 0;
		if (set[y] == s1[i])
		{
			if ()
			while (set[y] != str1[i])
			{
				str1[i] = buffer[i];
			}
			
		}
		i++;
	}
	i = 0;
	y = 0;
	while (i < len - ft_strlen(set))
	{
		while (str1[i] != '\0')
		{
			buffer[y] = str1[i];
			y++;
			i++;
		}
		i++;
	}
	buffer[y] = '\0';
	return (buffer);
}