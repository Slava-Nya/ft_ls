/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:38:40 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:45:36 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	print_file_node(t_node *node, t_flags *flags, t_print *attr)
{
	char	dir_path[MAX_PATHLEN];

	init_dir_path(dir_path, node->path);
	print_srcs(node->srcs, dir_path, flags);
	attr->need_space = 1;
}
