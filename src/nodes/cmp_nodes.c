/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:29:12 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/15 17:16:57 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"
#include "nodes.h"

int		cmp_nodes(const void *node11, const void *node22, void *flags_v)
{
	long	ret;
	t_node	*node1;
	t_node	*node2;
	t_flags	*flags;

	node1 = (t_node *)(node11);
	node2 = (t_node *)(node22);
	flags = (t_flags *)(flags_v);
	if (flags->sort == f_unset)
		return (-1);
	ret = 0;
	if (flags->sort == f_mtime)
		ret = node2->info.st_mtime - node1->info.st_mtime;
	else if (flags->sort == f_ctime)
		ret = node2->info.st_ctime - node1->info.st_ctime;
	else if (flags->sort == f_atime)
		ret = node2->info.st_atime - node1->info.st_atime;
	else if (flags->sort == f_size)
		ret = node2->info.st_size - node1->info.st_size;
	if (ret == 0)
		ret = ls_strcmp(node1->path, node2->path);
	if (flags->all[31])
		ret *= -1;
	return ((int)ret);
}
