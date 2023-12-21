#include "libft.h"

char	*ft_strrchr(const char *by, int c)
{
    int    i;
    char   a;
    
    a = (char)c;
    i = ft_strlen(by);
    while(i >= 0)
    {
        if(by[i] == a)
            return ((char *)(by + i));
        i--;
    }
    return (0);
}
