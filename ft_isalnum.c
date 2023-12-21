#include "libft.h"

int ft_isalnum(char y)
{
    return((y >= 'a' && y <= 'z') || (y >= 'A' && y <= 'Z') || (y >= '0' && y <= '9'));
}
/*#include <stdio.h>
int main()
{
    char p[]= "//.";
    int i=0;
    while(p[i] != '\0')
    {
        int b = ft_isalnum(*p);
        if ( b == 1)
        {
            b++;
        }
        if(b == 2)
        {
            printf("harf veya rakam icerir.");
            break;
        }
        i++;
    }
    printf("harf veya rakam icermez.");
}
*/