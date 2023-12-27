/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:33:37 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 15:42:59 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	lenby;
	size_t	finish;
	
	if (!s || !*s)
		return (0);
	lenby = ft_strlen(s);
	if (start < lenby)
		finish = lenby - start;
	if (finish > len)
		finish = lenby;
	if (start > lenby || len == 0)
		return (0);
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
