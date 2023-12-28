/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:38:59 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/28 18:04:25 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	node = *lst;
	if (!lst || !*lst || !del)
		return ;
	node = *lst;
	while (*lst)
	{
		node = (*lst)-> next;
		ft_lstdelone (*lst, del);
		*lst = node;
	}
	*lst = NULL;
}
