/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:34:16 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/28 15:24:02 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	**ft_functionby(char *str, char c, char **res)
{
	unsigned int	i;
	size_t			length;
	unsigned int	block_index;

	i = 0;
	block_index = 0;
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
			res[block_index] = ft_substr(str + i - length, 0, length);
			++block_index;
		}
		else
			++i;
	}
	res[block_index] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	numofblocks;
	unsigned int	numofchar;
	char			**res;

	numofchar = 0;
	numofblocks = 1;
	while (s[numofchar])
	{
		if (s[numofchar] == c)
			numofblocks++;
		numofchar++;
	}
	res = (char **)malloc(sizeof(char *) * (numofblocks + 1));
	if (!res)
		return (NULL);
	return (ft_functionby((char *)s, c, res));
}
