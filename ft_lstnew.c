/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:37:11 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 17:54:18 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nxt;

	nxt = malloc(sizeof(t_list));
	if (!nxt)
		return (NULL);
	nxt->content = content;
	nxt->next = NULL;
	return (nxt);
}
