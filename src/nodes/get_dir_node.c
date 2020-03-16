//
// Created by youpaw on 16.03.2020.
//

#include "nodes.h"
#include "srcs.h"
#include <dirent.h>

t_node	*get_dir_node(char *argv, struct stat info, t_flags *flags)
{
	DIR *dir;
	t_node *node;

	if (!(dir = opendir(argv)))
		return (get_error_node(argv));
	node = init_node(argv, info);
	node->srcs = get_srcs(dir, argv, flags);
	return (node);
}
