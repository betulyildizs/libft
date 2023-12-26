/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:32:26 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/22 14:34:41 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_useless(const char *str)
{
	int	j;

	j= 0;
	while ((str[j] <= 13 && str[j] >= 9) || str[j] == 32)
	{
		j++;
	}
	return (j);
}

int		ft_atoi(const char *by)
{
	int					i;
	int					sign;
	unsigned long int   result;

	result = 0;
	sign = 1;
	i = ft_useless(by);
	if (by[i] == '-' || by[i] == '+')
	{
		if (by[i] == '-')
			sign = -1;
		i++;
	}
	while (by[i] <= '9' && by[i] >= '0')
	{
		result = result * 10 + (by[i] - '0');
		i++;
	}
	return (result * sign);
}
