/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:29:34 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/22 14:33:57 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strlcpy(const char *src, char *dest)
{
    unsigned int	i;
    i = 0;

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
   
    return (dest);
}
