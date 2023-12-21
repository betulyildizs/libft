#include "libft.h"

int	ft_tolower(int y)
{
	if (y >= 'A' && y <= 'Z')
    {
		return (y + 32);
    }
	else
		return (y);
}