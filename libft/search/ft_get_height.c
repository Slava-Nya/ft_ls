#include "search_lib.h"

int 			ft_get_height(t_avl *node)
{
	if (!node)
		return (0);
	return (node->height);
}
