//
// Created by youpaw on 27.03.2020.
//
#include "print_col.h"
#include "str_lib.h"

void print_src(t_src *src, t_print_col *attr)
{
	int len;

	if (attr->n < 2)
		ft_putendl(src->name);
	else
	{
		attr->id++;
		if (attr->id == attr->n)
		{
			attr->id = 0;
			ft_putendl(src->name);
		}
		else
		{
			len = ft_putstr(src->name);
			while (len++ < attr->width)
				ft_putstr(" ");
		}
	}
}
