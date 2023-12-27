/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:32:36 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/27 17:33:29 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	size_t	size;
	void	*num;

	if ((n == 0) || (s == 0))
    {
        n = 1;
        s = 1;
    }
    size = n * s;
    num = malloc(size);
    if (num == NULL)
        return (0);
    ft_bzero(num, size);
    return (num);
}
