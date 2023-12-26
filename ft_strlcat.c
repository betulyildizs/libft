/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:50 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/22 14:33:51 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(const char *src, char *dest, size_t s)
{
    unsigned int	i;

    i = 0;
	while(*dest)
    {
        i++;
    }
    while(i < s)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}
