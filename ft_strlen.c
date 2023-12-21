#include "libft.h"

size_t  ft_strlen(const char *by)
{
    unsigned int i;
    i = 0;

    while(by[i] != '\0')
    {
        i++;
    }
    return (i);
}
