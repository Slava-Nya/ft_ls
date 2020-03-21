//
// Created by youpaw on 17.03.2020.
//
#include "print.h"
#include "str_lib.h"

static int	get_dir_path(t_src *src, char dir_path[MAX_PATHLEN])
{
	if ((src->info.st_mode & S_IFMT) == S_IFDIR && \
	!ft_strequ(".", src->name) && \
	!ft_strequ("..", src->name))
	{
		ft_strcat(dir_path, src->name);
		return (0);
	}
	return (1);
}

static void	walk_srcs(t_avl *srcs, char dir_path[MAX_PATHLEN], t_flags *flags, t_print *attr)
{
	if (!srcs)
		return ;
	walk_srcs(srcs->left, dir_path, flags, attr);
	if (!get_dir_path(srcs->content, dir_path))
		print_node(get_dir_node(dir_path, ((t_src*)srcs->content)->info), flags, attr);
	walk_srcs(srcs->right, dir_path, flags, attr);
}

static void	print_dir_head(char *path, t_print *attr)
{
	if (attr->need_space)
		ft_putstr("\n");
	if (attr->need_head)
	{
		ft_putstr(path);
		ft_putendl(":");
	}
}

void	print_dir_node(t_node *node, t_flags *flags, t_print *attr)
{
	char dir_path[MAX_PATHLEN];
	size_t len;

	print_dir_head(node->path, attr);
	print_srcs(node->srcs, flags);
	if (flags->all[10])
	{
		len = ft_strlen(node->path);
		ft_strcpy(dir_path, node->path);
		if (dir_path[len - 1] != '/')
		{
			dir_path[len++] = '/';
			dir_path[len] = '\0';
		}
		walk_srcs(node->srcs, dir_path, flags, attr);
	}
}
