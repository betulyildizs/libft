/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:28:44 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/22 12:54:19 by beyildiz         ###   ########.fr       */
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
/*#include <stdio.h>
int main () {

    int str[4] ={1, 3, -8, 87};
    ft_memset(str, 210, 2);
	ft_memset(str, 4, 3);

    printf("%d %d %d %d", str[0], str[1], str[2], str[3]);
   
   return(0);
}*/

