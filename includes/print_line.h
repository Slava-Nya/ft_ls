//
// Created by youpaw on 24.03.2020.
//

#ifndef PRINT_LINE_H
#define PRINT_LINE_H

#include "srcs.h"

struct  s_max_values{
	int 	links;
	int 	uid;
	int 	gid;
	int 	size;
	int 	date;
};

typedef struct s_max_values	t_max_values;

void	print_mode(int mode);
void	get_elements(t_avl *srcs, t_flags *flags, t_max_values *max);
void	print_srcs_line(t_avl *srcs, t_flags *flags);

#endif //PRINT_LINE_H
