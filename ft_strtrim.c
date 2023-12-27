/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:34:07 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 18:31:20 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charinset(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*start;
	char	*end;

	start = (char *)s1;
	end = start + ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	while (*start && ft_charinset(*start, set))
	{
		++start;
	}
	while (start < end && ft_charinset(*(end - 1), set))
	{
		--end;
	}
	str = ft_substr(start, 0, end - start);
	return (str);
}
