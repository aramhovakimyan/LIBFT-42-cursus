/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahovakim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:41:58 by ahovakim          #+#    #+#             */
/*   Updated: 2023/02/14 13:47:56 by ahovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	if (!lst || !del)
	{
		return ;
	}
	while (*lst)
	{
		if ((*lst)->content)
			del((*lst)->content);
		p = *lst;
		*lst = p->next;
		free(p);
	}
	lst = NULL;
}
