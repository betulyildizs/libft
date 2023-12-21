#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t s)
{
    char    *strdest;
    char    *strsource;
    int     i;
    int     a;

    strdest = (char *)dest;
    strsource = (char *)src;
    if(!strdest && !strsource)
    {
        return (0);
    }
    if(strdest < strsource)
    {
        i = s - 1;
        while (i >= 0)
        {
            strdest[i] = strsource[i];
            i--;
        }
    }
    else
    { 
        i = 0;
        a = s;
        while(i < a)
        {
            strdest[i] = strsource[i];
            i++;
        }
    }
    return (strdest);
}
#include <stdio.h>
int main()
{
    char s[10] = "uytjjrr";
    char d[10];
    printf("%s", ((char *)(ft_memmove(d, s, 10))));
}