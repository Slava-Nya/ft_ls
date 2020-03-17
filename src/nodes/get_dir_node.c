//
// Created by youpaw on 16.03.2020.
//

#include "nodes.h"
#include "srcs.h"
#include <dirent.h>
#include <libft.h>

static t_node  *init_node(char *argv, struct stat info)
{
	t_node *new_node;

	new_node = ft_xmalloc(sizeof(t_node));
	new_node->info = info;
	ft_strcpy(new_node->path, argv);
	new_node->srcs = NULL;
	new_node->error = NULL;
	return(new_node);
}

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
