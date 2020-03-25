//
// Created by youpaw on 26.03.2020.
//

#include "print_col.h"
#include "mem_lib.h"
#include <sys/ioctl.h>
#include <unistd.h>

t_print_col *get_print_col(t_avl *srcs)
{
	int max_name;
	t_print_col *attr;
	struct winsize w;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	max_name = get_max_name(0, srcs);
	attr = ft_xmalloc(sizeof(t_print_col));
	attr->width = max_name + 1;
	attr->n = w.ws_col / attr->width;
	return (attr);
}
