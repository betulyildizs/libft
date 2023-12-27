/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:34:16 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 17:31:52 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_function(char *str, char c, char **res)
{
	unsigned int	i = 0;
	size_t 			length;

	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			length = 0;
			while (str[i] && str[i] != c)
			{
				++length;
				++i;
			}
			res[i - length] = ft_substr(str + i - length, 0, length);
		}
		else
			++i;
	}
	res[i] = 0;
	return (res);
}
char	**ft_split(char const *s, char c)
{
	unsigned int	numofblocks = 1;
	unsigned int	numofchar = 0;
	char			**res;

	while (*s)
	{
		if (s[numofchar] == c)
			numofblocks++;
		numofchar++;
	}
	res = (char **)malloc(sizeof(char *) * (numofblocks + 1));
	if (!res)
		return (0);
	ft_function((char *)s, c, res);
	return (res);
}
/*#include "libft.h"

char	*ft_function(char	*str, char c, char **res)
{
	unsigned int	i;
	size_t 			length;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] != c)
		{
			length = 0;
			while (*str && *str != c && ++length)
				++i;;
			res[i++] = ft_substr(str - length, 0, length);
		}
		else
			++i;
	}
	res[i] = 0;
	return (res);
}
char **ft_split(char const *s, char c)
{
	unsigned int	numofblocks;
	unsigned int	numofchar;
	char			**res;

	numofchar = 0;
	numofblocks = 1;
	while(*s)
	{
		if (s[numofchar] == c)
			numofblocks++;
		numofchar++;
	}
	res = (char **)malloc(sizeof(char *) * numofchar * numofblocks + 1);
	if (!res)
		return (0);
	ft_function((char *)s, c, res);
	return (res);
}
*/