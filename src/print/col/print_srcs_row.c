//
// Created by youpaw on 19.03.2020.
//
#include "print_col.h"
#include "str_lib.h"

static void print_src(t_src *src, t_print_col *attr)
{
	static int id;

	if (attr->n < 2)
		ft_putendl(src->name);
	else
	{

	}
}

static void	walk_srcs(t_avl *srcs, t_print_col *attr)
{
	if (!srcs)
		return ;
	walk_srcs(srcs->left, attr);
	print_src(srcs->content, attr);
	walk_srcs(srcs->right, attr);
}

void	print_srcs_row(t_avl *srcs)
{
	t_print_col *attr;

	attr = get_print_col(srcs);
	walk_srcs(srcs, attr);
}