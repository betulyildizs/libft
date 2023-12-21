#include "libft.h"

size_t  ft_strlcat(const char *src, char *dest, size_t s)
{
    unsigned int i;

    i = 0;

    while(*dest)
    {
        i++;
    }
    while(i < s)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    return (i);
}
