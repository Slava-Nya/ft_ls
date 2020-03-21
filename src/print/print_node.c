//
// Created by youpaw on 17.03.2020.
//

#include "print.h"
#include "srcs.h"
#include <dirent.h>

static int get_dir_srcs(t_node *node, t_flags *flags, t_print *attr)
{
	DIR *dir;

	if (!(dir = opendir(node->path)))
	{
		print_error(node->path);
		attr->need_space = 1;
		return (1);
	}
	node->srcs = get_srcs(dir, node->path, flags);
	return (0);
}

void	print_node(t_node *node, t_flags *flags, t_print *attr)
{

	if (*node->path)
	{
		if (!flags->all[18] && get_dir_srcs(node, flags, attr))
			return ;
		print_dir_node(node, flags, attr);
	}
	else
		print_file_node(node, flags, attr);
}
