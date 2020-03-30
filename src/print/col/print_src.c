//
// Created by youpaw on 27.03.2020.
//
#include "print_col.h"
#include "str_lib.h"

void print_src(t_src *src, t_print_col *attr)
{
	int cnt;

	if (!attr->n)
	{
		ft_putstr(src->name);
		cnt = 0;
		while (cnt++ < N_PADDING)
			ft_putstr(PADDING);
	}
	else if (attr->n == 1)
		ft_putendl(src->name);
	else
	{
		ft_putstr(src->name);
		cnt = attr->widths[attr->id] - src->len;
		while (cnt--)
			ft_putstr(PADDING);
		if (attr->id == attr->n - 1)
			ft_putstr("\n");
		attr->id = (attr->id + 1) % attr->n;
	}
}
