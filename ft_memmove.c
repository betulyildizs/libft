/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:05 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/29 18:03:25 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_conditionby(char *deststr, char *sourcestr, size_t s)
{
	size_t	i;

	if (deststr < sourcestr)
	{
		i = 0;
		while (i < s)
		{
			deststr[i] = sourcestr[i];
			i++;
		}
	}
	else
	{
		i = s;
		while (i > 0)
		{
			deststr[i - 1] = sourcestr[i - 1];
			i--;
		}
	}
	return (deststr);
}

void	*ft_memmove(void *dest, const void *src, size_t s)
{
	char	*strdest;
	char	*strsource;

	strdest = (char *)dest;
	strsource = (char *)src;
	if (!strdest && !strsource)
	{
		return (0);
	}
	return (ft_conditionby(strdest, strsource, s));
}
