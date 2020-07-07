/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:25:12 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:25:16 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	print_file_node(t_node *node, t_flags *flags, t_print *attr)
{
	char dir_path[MAX_PATHLEN];

	init_dir_path(dir_path, node->path);
	print_srcs(node->srcs, dir_path, flags);
	attr->need_space = 1;
}
