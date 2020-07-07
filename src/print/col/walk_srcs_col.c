/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   walk_srcs_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:28:01 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:28:04 by hlorrine         ###   ########.fr       */
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
