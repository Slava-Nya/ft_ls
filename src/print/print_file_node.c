//
// Created by youpaw on 17.03.2020.
//

#include "print.h"

void	print_file_node(t_node *node, t_flags *flags, t_print *attr)
{
	print_srcs(node->srcs, flags);
	attr->need_space = 1;
}