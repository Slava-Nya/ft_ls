//
// Created by youpaw on 17.03.2020.
//

#include "print.h"

void	print_node(t_node *node, t_flags *flags, t_print *attr)
{
	if (node->error)
		print_error_node(node);
	else if (*node->path)
		print_dir_node(node, flags, attr);
	else
		print_file_node(node, flags, attr);
}
