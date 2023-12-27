/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:28:44 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 16:07:17 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *by, int v, size_t s)
{
    char    *str;
    unsigned i;

    str = (char *)by;
    i = 0;
    
    while(i < s)
    {
        str[i] = v;
        i++;
    }
    return (str);
}
