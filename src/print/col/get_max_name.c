//
// Created by youpaw on 25.03.2020.
//

#include "search_lib.h"
#include "str_lib.h"
#include "math_lib.h"
#include "srcs.h"

static int	check_max_name(int max_name, t_src *src)
{
	int new_max;

	new_max = ft_strlen(src->name);
	if (new_max > max_name)
		return (new_max);
	return (max_name);
}

int get_max_name(int max_name, t_avl *srcs)
{
	static int max_left;
	static int max_right;

	if (!srcs)
		return (max_name);
	max_name = check_max_name(max_name, srcs->content);
	max_left = get_max_name(max_name, srcs->left);
	max_right = get_max_name(max_name, srcs->right);
	return (ft_max(max_left, max_right));
}