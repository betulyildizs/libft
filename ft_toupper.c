#include "libft.h"

int ft_toupper(int y)
{
    if (y >= 'a' && y <= 'z')
    {
        return (y - 32);
    }
    else
        return (y);
}