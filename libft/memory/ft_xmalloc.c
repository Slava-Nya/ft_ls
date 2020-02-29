#include <stdlib.h>
#include "str_lib.h"

void *ft_xmalloc(size_t size)
{
	void *ret;

	if (!(ret = malloc(size)))
	{
		ft_putstr_fd("out of memory error, exiting...", 2);
		exit(12);
	}
	return (ret);
}