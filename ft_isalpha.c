#include "libft.h"

int ft_isalpha(char y)
{
    return((y <= 'z' && y >= 'a') || (y <= 'Z' && y >= 'A'));
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