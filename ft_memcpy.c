/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:53:40 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/29 19:03:58 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	char			*strsource;
	char			*strdest;
	unsigned int	i;

	strdest = (char *)dest;
	strsource = (char *)src;
	if (!strdest && !strsource)
	{
		return (0);
	}
	i = 0;
	while (i < s)
	{
		strdest[i] = strsource[i];
		i++;
	}
	return (strdest);
}
