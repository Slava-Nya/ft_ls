//
// Created by youpaw on 17.03.2020.
//

#include "print.h"
#include "print_col.h"
#include "print_line.h"
void	print_srcs(t_avl *srcs, t_flags *flags)
{
	print_srcs_line(srcs, flags);
//	if (flags->print == f_col)
//		print_srcs_col(srcs);
//	else if (flags->print == f_line)
//		print_srcs_line(srcs, flags);
//	else
//		print_srcs_1perl(srcs, flags);
}