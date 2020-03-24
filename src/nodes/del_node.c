//
// Created by youpaw on 17.03.2020.
//

#include <stdlib.h>
#include "nodes.h"

void	del_node(t_node *node, size_t size)
{
	(void)size;
	ft_del_avl(&node->srcs, (void (*)(void *)) &del_src);
	free(node);
}
