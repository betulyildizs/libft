/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:53:40 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 17:55:25 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	char	*strsource;
	char	*strdest;
	size_t	i;

	strdest = (char *)dest;
	strsource = (char *)src;
	if (!strdest && !strsource)
	{
		return (0);
	}
	i = 0;
	while (*strsource && i < s)
	{
		strdest[i] = strsource[i];
		i++;
	}
	return (strdest);
}
/*#include <stdio.h>
int main()
{
	char s[10] = "uytjjrr";
	char d[10];
	printf("%s", ((char *)(ft_memcpy(d, s, 10))));
}*/
