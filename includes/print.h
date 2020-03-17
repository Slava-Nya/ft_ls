//
// Created by youpaw on 16.03.2020.
//

#ifndef PRINT_H
#define PRINT_H

#include "nodes.h"

struct s_print{
	int need_head;
	int need_space;
};

typedef struct s_print	t_print;

void	print_srcs(t_src *srcs, t_flags *flags);
void	print_node(t_node **node, t_flags *flags, t_print attr);
void	print_dir_node(t_node *node, t_flags *flags, t_print attr);
void	print_file_node(t_node *node, t_flags *flags, t_print attr);
void	print_error_node(t_node *node);

#endif //PRINT_H
