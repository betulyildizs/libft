/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:50 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 16:20:22 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    unsigned int	i;

    i = 0;
	while(*dest)
    {
        i++;
    }
    while(i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}
