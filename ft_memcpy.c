#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t s)
{
    char    *strsource;
    char    *strdest;
    size_t  i;

    strdest = (char *)dest;
    strsource = (char *)src;
    if (!strdest && !strsource)
    {
        return (0);
    }
    i = 0;
    while(*strsource && i < s)
    {
        strdest[i] = strsource[i];
        i++;
    }
    return (strdest);
}
#include <stdio.h>
int main()
{
    char s[10] = "uytjjrr";
    char d[10];
    printf("%s", ((char *)(ft_memcpy(d, s, 10))));
}