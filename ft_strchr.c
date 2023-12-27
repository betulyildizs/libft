/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:30:43 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 18:01:57 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *by, int c)
{
	char	a;

	a = (unsigned char)c;
	while (*by != a)
	{
		if (*by == '\0')
			return (0);
		by++;
	}
	return ((char *)by);
}
