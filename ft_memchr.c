#include "libft.h"

void    *ft_memchr(const void *by, int c, size_t s)
{
    unsigned int    i;
    char            *str;

    i = 0;
    str = (char *)by;
    while(i < s)
    {
        if (*(unsigned char *)str == (unsigned char)c)
        {
            return (str + i);
        }
        i++;
        str++;
    }
    return (NULL);
}