/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:31:22 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/28 18:11:41 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *by, int c, size_t s)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)by;
	while (i < s)
	{
		if ((unsigned char )str[i] == (unsigned char)c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
