/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: novella <novella@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:18:09 by novella           #+#    #+#             */
/*   Updated: 2026/11/08 15:58:12 by novella          ###   ########lyon.fr   */
=======
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 15:18:09 by novella           #+#    #+#             */
/*   Updated: 2026/11/09 16:18:37 by gunovell         ###   ########lyon.fr   */
>>>>>>> d948ca6d8b3696da54aa2f61a5801efd564617c2
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	
	i = 0;
	if (dstsize > 0)
	{
<<<<<<< HEAD
		while (i < dstsize - 1 && src[i] != '\0')
=======
		while (i < dstsize - 1 && src[i])
>>>>>>> d948ca6d8b3696da54aa2f61a5801efd564617c2
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}