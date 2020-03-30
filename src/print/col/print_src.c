//
// Created by youpaw on 27.03.2020.
//
#include "print_col.h"
#include "str_lib.h"
#include "print.h"

void print_src(t_src *src, t_print_col *attr)
{
	int cnt;

	if (!attr->n)
	{
		print_name(src->name, src->info.st_mode);
		cnt = 0;
		while (cnt++ < N_COL_PAD)
			ft_putstr(COL_PAD);
	}
	else if (attr->n == 1)
		print_name_endl(src->name, src->info.st_mode);
	else
	{
		print_name(src->name, src->info.st_mode);
		cnt = attr->widths[attr->id] - src->len;
		while (cnt--)
			ft_putstr(COL_PAD);
		if (attr->id == attr->n - 1)
			ft_putstr("\n");
		attr->id = (attr->id + 1) % attr->n;
	}
}
