/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:33:47 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/26 16:08:21 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char			*str;
	unsigned int	strlen;
	unsigned int	i;
	unsigned int	j;
	
	strlen = ft_strlen(str1) + ft_strlen(str2);
	str = (char *)malloc(sizeof(char) * strlen + 1);
	i = 0;
	while(i < ft_strlen(str1))
	{
		str[i] = str1[i];
		i++;
	}
	j = 0;
	while(j < ft_strlen(str2))
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}