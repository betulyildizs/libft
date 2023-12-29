/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:05 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/28 18:12:41 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_conditionby(char *deststr, char *sourcestr, size_t s)
{
	int		i;
	int		a;

	if (deststr < sourcestr)
	{
		i = s - 1;
		while (i >= 0)
		{
			deststr[i] = sourcestr[i];
			i--;
		}
	}
	else
	{
		i = 0;
		a = s;
		while (i < a)
		{
			deststr[i] = sourcestr[i];
			i++;
		}
	}
	return ((deststr));
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
