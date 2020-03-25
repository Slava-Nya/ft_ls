//
// Created by youpaw on 24.03.2020.
//

#ifndef PRINT_LINE_H
#define PRINT_LINE_H

#include "srcs.h"

void	get_elements(t_avl *srcs, t_flags *flags);

static struct  s_max_values{
	int 	links;
	int 	uid;
	int 	gid;
	int 	size;
	int 	date;
};

typedef struct s_max_value	t_max_values;

#endif //PRINT_LINE_H
