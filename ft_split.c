/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:34:16 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/29 18:56:28 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_functionby(char *str, char c, char **res)
{
	unsigned int	j;
	unsigned int	s;

	j = 0;
	while (*str)
	{
		if (*str != c)
		{
			s = 0;
			while (*str && *str != c)
			{
				++s;
				++str;
			}
			res[j++] = ft_substr(str - s, 0, s);
		}
		else
			++str;
	}
	res[j] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	x;
	char	**res;

	if (!s)
		return (0);
	x = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			++i;
		else
		{
			++x;
			while (s[i] && s[i] != c)
				++i;
		}
	}
	res = malloc(sizeof(char *) * (x + 1));
	if (!res)
		return (0);
	return (ft_functionby((char *)s, c, res));
}
