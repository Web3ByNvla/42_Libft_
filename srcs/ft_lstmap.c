/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:25:13 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/11 16:58:34 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**new_lst;
	t_list	*cpy;
	size_t	count;
	
	if (!lst || !f || !del)
		retrun (NULL);
	cpy = lst;
	while(cpy != NULL)
	{
		
	}
}