/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:30:55 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 18:05:03 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *by, int c)
{
	int		i;
	char	a;

	a = (char)c;
	i = ft_strlen(by);
	while (i >= 0)
	{
		if (by[i] == a)
			return ((char *)(by + i));
		i--;
	}
	return (0);
}
