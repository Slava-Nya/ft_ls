//
// Created by youpaw on 17.03.2020.
//

#include <stdlib.h>
#include "nodes.h"

void	del_node(t_node **node)
{
	//деструктор авл дерева
	free(*node);
	*node = NULL;
}