#include <stdlib.h>

ssize_t ft_min(ssize_t x, ssize_t y)
{
	if (x > y)
		return (y);
	return (x);
}
