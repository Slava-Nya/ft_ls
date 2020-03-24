//
// Created by slavanya on 21.03.2020.
//

#include "srcs.h"
#include "str_lib.h"

void print_src(t_src *src)
{
	ft_putendl(src->name);
}

void	print_srcs_1perl(t_avl *srcs, t_flags *flags)
{
	if (!srcs)
		return ;
	print_srcs_1perl(srcs->left, flags);
	print_src(srcs->content);
	print_srcs_1perl(srcs->right, flags);
}