//
// Created by youpaw on 27.03.2020.
//

#include "print_col.h"

void	walk_srcs_col(t_avl *srcs, t_print_col *attr)
{
	if (!srcs)
		return ;
	walk_srcs_col(srcs->left, attr);
	print_src(srcs->content, attr);
	walk_srcs_col(srcs->right, attr);
}