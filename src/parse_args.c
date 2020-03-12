/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:50:11 by slavanya          #+#    #+#             */
/*   Updated: 2020/03/11 22:16:41 by slavanya         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "nodes.h"
#include "flags.h"
#include "str_lib.h"
#include "mem_lib.h"
#include "list_lib.h"
#include <dirent.h>
#include <errno.h>
#include <stdio.h>
//
//void	save_argv(t_nodes *nodes,  struct stat info, char *argv)
//{
//
//}

int 	read_dir(t_node *nodes, char *argv) // Енто должно быть в get_srcs
{
	DIR		*dir;
	struct	dirent *srcs;
	struct	stat	info;
	char path[256];
	int len;

	len = ft_strlen(argv);
	ft_strcpy(path, argv);
	path[len++] = '/';
	dir = opendir(argv);
	if (dir)
	{
		while ((srcs = readdir(dir)))
		{
			path[len] = '\0';
			ft_strcat(path, srcs->d_name);
			stat(srcs->d_name, &info);
			nodes->info = info;
		}
	}
	return (0);
}

/*
 * flags_rest[18, 23, 25, 26] --- d, k, m, n
*/

void	read_argv(t_node *nodes, t_flags *flags, char *argv) //Ето должно быть в get_node
{
	int		type;
	struct	stat info;

	if (flags->rest[18] || flags->rest[23] || flags->rest[25] || flags->rest[26])
		lstat(argv, &info);
	else if (stat(argv, &info))
	{
		errno = 0;
		lstat(argv, &info);
	}
	if (errno)
	{
		printf("я такое читать не буду\n");
		return ;
	}
	type = info.st_mode & S_IFMT;
	if (!flags->rest[18] && type == S_IFDIR)
	{
		read_dir(nodes, argv);
		printf("thats dir\n");
		return ;
	}
	else
	{
		save_argv(nodes, info, argv);
		printf("thats file\n");
	}
}

t_list		*parse_args(int argc, char **argv, int skip, t_flags *flags) //Ето должно быть туть
{
	t_node *nodes;

	nodes = (t_node *) ft_xmalloc(sizeof(t_node));
	while (skip < argc)
	{
		read_argv(nodes, flags, argv[skip]);
		skip++;
	}
}
