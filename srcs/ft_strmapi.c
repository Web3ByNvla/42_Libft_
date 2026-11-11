/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:58:02 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/10 15:18:07 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buffer;

	if (!s || !f)
		return (NULL);
	i = 0;
	buffer = malloc(sizeof(char) * ft_strlen(s));
	if (!buffer)
		return (NULL);
	while (s[i])
	{
		buffer[i] = f(i, &s[i]);
		i++;
	}
	return (buffer);
}