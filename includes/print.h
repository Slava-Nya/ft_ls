//
// Created by youpaw on 16.03.2020.
//

#ifndef PRINT_H
#define PRINT_H
#include "nodes.h"
# define N_ERRORS 2
struct s_print{
	int need_head;
	int need_space;
};

struct s_errors{
	int		code;
	char	*str;
};

typedef struct s_print	t_print;
typedef struct s_errors t_errors;

t_errors g_errors[N_ERRORS] = {
		{2, "cannot access"},
		{13, "cannot open directory"}
};

void	print_srcs(t_avl *srcs, t_flags *flags);
void	print_srcs_col(t_avl *srcs);
void	print_srcs_row(t_avl *srcs, t_flags *flags);

void	print_node(t_node *node, t_flags *flags, t_print *attr);
void	print_dir_node(t_node *node, t_flags *flags, t_print *attr);
void	print_file_node(t_node *node, t_flags *flags, t_print *attr);
void	print_error(char *path);

#endif //PRINT_H
