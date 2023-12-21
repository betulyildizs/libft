#include "libft.h"

char	*ft_strchr(const char *by, int c)
{
    char    a = (unsigned char)c;
	while (*by != a)
    {
		if (*by == '\0')
			return (0);
        by++;
    }
	return ((char *)by);
}