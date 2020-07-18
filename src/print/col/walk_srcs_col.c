/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walk_srcs_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:13:08 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:45:36 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zconf.h>
#include "print_col.h"

void	walk_srcs_col(t_avl *srcs, char *path, t_print_col *attr)
{
	if (!srcs)
		return ;
	walk_srcs_col(srcs->left, path, attr);
	print_src(srcs->content, path, attr);
	walk_srcs_col(srcs->right, path, attr);
}
