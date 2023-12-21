#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t s)
{
    char            *str1;
    char            *str2;
    unsigned int    i;

    i = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;
    while(i < s)
    {
        if (str1[i] != str2[i])
            return ((unsigned char)str1[i] - ((unsigned char)str2[i]));
        i++;
    }
    return (0);
}