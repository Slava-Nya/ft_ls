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

//#include "nodes.h"
//#include "flags.h"
//#include "str_lib.h"
//#include "mem_lib.h"
//#include "list_lib.h"
//#include <dirent.h>
//#include <errno.h>
//#include <stdio.h>
//#include "search_lib.h"
////
////void	save_argv(t_nodes *nodes,  struct stat info, char *argv)
////{
////
////}
//
//t_avl	*get_srcs(char *path, DIR *dir, t_flags *flags) // Енто должно быть в get_srcs
//{
//	struct dirent *srcs;
//	struct	stat	info;
//	char t_path[256];
//	int len;
//	t_avl *temp;
//
//	temp = NULL;
//	len = ft_strlen(path);
//	ft_strcpy(t_path, path);
//	t_path[len++] = '/';
//		while ((srcs = readdir(dir)))
//		{
//			t_path[len] = '\0';
//			ft_strcat(t_path, srcs->d_name);
//			stat(srcs->d_name, &info);
////			nodes->info = info;
//			temp = ft_insert_avl(temp, info, flags, &cmp_srcs)
//		}
//	return (temp);
//}
//
///*
// * flags_rest[18, 23, 25, 26] --- d, k, m, n
//*/
//
//void	read_argv(t_node *nodes, t_flags *flags, char *argv) //Ето должно быть в get_node
//{
//	int		type;
//	struct	stat info;
//
//	if (flags->rest[18] || flags->rest[23] || flags->rest[25] || flags->rest[26])
//		lstat(argv, &info);
//	else if (stat(argv, &info))
//	{
//		errno = 0;
//		lstat(argv, &info);
//	}
//	if (errno)
//	{
//		printf("я такое читать не буду\n");
//		return ;
//	}
//	type = info.st_mode & S_IFMT;
//	if (!flags->rest[18] && type == S_IFDIR)
//	{
//		read_dir(nodes, argv);
//		printf("thats dir\n");
//		return ;
//	}
//	else
//	{
//		save_argv(nodes, info, argv);
//		printf("thats file\n");
//	}
//}
//
//t_list		*parse_args(int argc, char **argv, int skip, t_flags *flags) //Ето должно быть туть
//{
//	t_list *nodes;
//	t_node *node;
//
//	nodes = NULL;
//	while (skip < argc)
//	{
//		node = get_node(argv[skip], flags);
//		ft_lstaddsort(&nodes, ft_lstnew(node, sizeof(t_node)), flags, &cmp_nodes);
//		skip++;
//	}
//	return (nodes);
//}
