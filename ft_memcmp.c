/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:31:57 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 17:55:10 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t s)
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < s)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - ((unsigned char)str2[i]));
		i++;
	}
	return (0);
}
