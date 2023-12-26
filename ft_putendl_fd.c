/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:35:54 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/22 14:46:20 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while(s[i] != '\0')
	{
		write(fd, s[i], 1);
		i++;	
	}
	write(fd, '\n', 1);
}
