/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 18:27:16 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/28 18:21:01 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int y)
{
	return ((y <= 'z' && y >= 'a') || (y <= 'Z' && y >= 'A'));
}

/*Genel olarak, C dilinde bir return ifadesinde bulunan bir 
mantıksal ifade doğru (true) ise, 1 olarak değerlendirilir. 
Eğer mantıksal ifade yanlış (false) ise, 0 olarak değerlendirilir. 
Bu, C dilinde mantıksal değerlerin (boolean) temsilinde yaygın olarak 
kullanılan bir yöntemdir.*/

/*Bu fonksiyonun başka hangi durumlarda kullanılabilir?

Bu tür bir fonksiyon, özellikle metin analizi, 
karakter dizi manipülasyonu ve karakter kontrolü 
gibi birçok uygulamada kullanılabilir.*/