#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t s)
{
    size_t  i;
    size_t  j;

    i = 0;
    if(s2[i] != '\0')
        return ((char *)s1);
    while(*s1 && i < s)
    {
        j = 0;
        while(s1[i + j] == s2[j] && (i + j) < s)
        {
            j++;
            if( s2[j] =='\0')
            {
                return ((char *)(s1 + i));
            }
        }
        i++;
    }
    return (0);
}