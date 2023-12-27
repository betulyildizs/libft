/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:39:28 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 16:07:06 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*by;
	void	*content;
	
	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while(lst)
	{
		content = (*f)(lst -> content);
		by = ft_lstnew(content);
		if(!by)
		{
			(*del)(content);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, by);
		lst = lst -> next;
	}
	return (newlist);
}
