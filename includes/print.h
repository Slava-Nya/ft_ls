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

static struct s_errors g_errors[N_ERRORS] = {
		{2, "cannot access"},
		{13, "cannot open directory"}
};

void	print_srcs(t_avl *srcs, t_flags *flags);

void	print_node(t_node *node, t_flags *flags, t_print *attr);
void	print_dir_node(t_node *node, t_flags *flags, t_print *attr);
void	print_file_node(t_node *node, t_flags *flags, t_print *attr);
void	print_error(char *path);

void	get_elements(t_avl *srcs, t_flags *flags);
void	print_mode(int mode);

#endif //PRINT_H
