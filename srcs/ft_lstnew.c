/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunovell <gunovell@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:32:27 by gunovell          #+#    #+#             */
/*   Updated: 2026/11/11 11:51:21 by gunovell         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content; 
	new->next = NULL;
	return (new);
}