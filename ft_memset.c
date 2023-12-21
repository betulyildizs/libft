#include "libft.h"

void    *ft_memset(void *by, int v, size_t s)
{
    char    *str;
    size_t i;

    str = (char *)by;
    i = 0;
    
    while(i < s)
    {
        str[i] = v;
        i++;
    }
    return (str);
}
#include <stdio.h>
int main () {

    int str[] ={1, 3, -8, 87};
    ft_memset(str, 4, 6);
    ft_memset(str, 210, 5);

    printf("%d", str[1]);
   
   return(0);
}
