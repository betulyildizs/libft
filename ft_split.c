/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:34:16 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/26 19:27:37 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	unsigned int	w;
	unsigned int	l;
	char			*str;

	l = 0;
	w = 1;
	while(*s)
	{
		if (s[l] == c)
			w++;
		l++;
	}
	str = (char *)malloc(sizeof(char) * l * w + 1);
	
}