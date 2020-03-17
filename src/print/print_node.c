//
// Created by youpaw on 17.03.2020.
//

#include "print.h"

void	print_node(t_node **node, t_flags *flags, t_print attr)
{
	t_node *temp;

	temp = *node;
	if (temp->error)
		print_error_node(temp);
	else if (*temp->path)
		print_dir_node(temp, flags, attr);
	else
		print_file_node(temp, flags, attr);
	del_node(node);
}