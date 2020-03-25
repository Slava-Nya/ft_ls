//
// Created by youpaw on 24.03.2020.
//

#ifndef PRINT_COL_H
#define PRINT_COL_H

#include "srcs.h"

struct s_print_col
{
	int n;
	int width;
};

typedef struct s_print_col t_print_col;

t_print_col *get_print_col(t_avl *srcs);
int 	get_max_name(int max_name, t_avl *srcs);
void	print_srcs_col(t_avl *srcs);
void	print_srcs_row(t_avl *srcs);
#endif //PRINT_COL_H
