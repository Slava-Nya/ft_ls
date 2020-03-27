//
// Created by youpaw on 19.03.2020.
//

#include "print_col.h"
#include "str_lib.h"

void	print_srcs_col(t_avl *srcs)
{
	t_print_col *attr;

	attr = init_col_attr(srcs);
	walk_srcs_col(srcs, attr);
	ft_putstr("\n");
	del_col_attr(&attr);
}