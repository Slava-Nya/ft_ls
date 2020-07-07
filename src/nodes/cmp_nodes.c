/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:29:12 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:29:14 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"
#include "nodes.h"

int		cmp_nodes(t_node *node1, t_node *node2, t_flags *flags)
{
	long ret;

	if (flags->sort == f_unset)
		return (-1);
	ret = 0;
	if (flags->sort == f_mtime)
		ret = node2->info.st_mtim.tv_sec - node1->info.st_mtim.tv_sec;
	else if (flags->sort == f_ctime)
		ret = node2->info.st_ctim.tv_sec - node1->info.st_ctim.tv_sec;
	else if (flags->sort == f_atime)
		ret = node2->info.st_atim.tv_sec - node1->info.st_atim.tv_sec;
	else if (flags->sort == f_size)
		ret = node2->info.st_size - node1->info.st_size;
	if (ret == 0)
		ret = ls_strcmp(node1->path, node2->path);
	if (flags->all[31])
		ret *= -1;
	return ((int)ret);
}
