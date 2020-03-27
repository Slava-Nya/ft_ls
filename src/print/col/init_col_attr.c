//
// Created by youpaw on 26.03.2020.
//

#include "print_col.h"
#include "math_lib.h"
#include "str_lib.h"
#include "mem_lib.h"
#include <sys/ioctl.h>
#include <unistd.h>

static int	check_max_name(int max_name, t_src *src)
{
	int new_max;

	new_max = ft_strlen(src->name);
	if (new_max > max_name)
		return (new_max);
	return (max_name);
}

static int get_max_name(int max_name, t_avl *srcs)
{
	if (!srcs)
		return (max_name);
	max_name = check_max_name(max_name, srcs->content);
	return (ft_max(get_max_name(max_name, srcs->left), \
	get_max_name(max_name, srcs->right)));
}

t_print_col *init_col_attr(t_avl *srcs)
{
	int max_name;
	t_print_col *attr;
	struct winsize w;

	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	max_name = get_max_name(0, srcs);
	attr = ft_xmalloc(sizeof(t_print_col));
	attr->width = max_name + 1;
	attr->n = 3;
	return (attr);
}
