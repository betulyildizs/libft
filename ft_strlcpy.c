#include "libft.h"

char    *ft_strlcpy(const char *src, char *dest)
{
    unsigned int i;
    i = 0;

    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
   
    return (dest);
}
