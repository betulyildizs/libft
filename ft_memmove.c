/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:05 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 18:41:40 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_conditionby(char *deststr, char *sourcestr, size_t s)
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
/*#include <stdio.h>
int main()
{
	char s[10] = "uytjjrr";
	char d[10];
	printf("%s", ((char *)(ft_memmove(d, s, 10))));
}*/

// sondan yazmaya başlar