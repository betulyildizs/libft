/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:32:45 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/26 14:39:25 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
    char *string;

    string = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (string == NULL)
        return (0);
    ft_strlcpy(string, ft_strlen(str) + 1);
    return (string);
}
