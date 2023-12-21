#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
    size_t  size;
    void    *num;

    if ((n == 0) || (s == 0))
    {
        n = 1;
        s = 1;
    }
    size = n * s;
    num = malloc(size);
    if (num == NULL)
        return (0);
    ft_bzero(num, size);
    return (num);
}
