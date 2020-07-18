/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:39:13 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 21:03:32 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "srcs.h"
#include <dirent.h>
#include "str_lib.h"

static void		print_dir_head(char *path, t_print *attr)
{
	if (attr->need_space)
		ft_putstr("\n");
	if (attr->need_head)
	{
		ft_putstr(path);
		ft_putendl(":");
	}
	attr->need_head = 1;
	attr->need_space = 1;
}

static int		get_dir_srcs(t_node *node, t_flags *flags, t_print *attr)
{
	DIR	*dir;

	if (!(dir = opendir(node->path)))
	{
		print_dir_head(node->path, attr);
		print_error(node->path);
		return (1);
	}
	node->srcs = get_srcs(dir, node->path, flags);
	closedir(dir);
	return (0);
}

void			print_node(t_node *node, t_flags *flags, t_print *attr)
{
	if (*node->path)
	{
		if (get_dir_srcs(node, flags, attr))
			return ;
		print_dir_node(node, flags, attr);
	}
	else
	{
		print_file_node(node, flags, attr);
		attr->need_space = 1;
	}
}
