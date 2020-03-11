//
// Created by youpaw on 11.03.2020.
//

#ifndef NODES_H
#define NODES_H
# include "search_lib.h"

struct      s_nodes
{
	char    *path;
	char    *error;
	 struct  *stat;
	 t_avl  *srcs;
	 s_node *next;
};

typedef struct s_nodes t_nodes;

#endif //NODES_H
