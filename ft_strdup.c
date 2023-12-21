#include "libft.h"

char	*ft_strdup(const char *str)
{
    size_t  s;
    char *string;

    s = ft_strlen(str);
    string = (char *)malloc(sizeof(char) * (s + 1));
    if (string == NULL)
        return (0);
    ft_strlcpy(string, str, s + 1);
    return (string);
}