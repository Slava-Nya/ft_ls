//
// Created by youpaw on 01.04.2020.
//

#include <libft.h>
#include "print.h"

void	print_link(char *path, t_src *src)
{
	char buf[MAX_PATHLEN];
	struct stat info;

	ft_strcat(path, src->name);
	readlink(path, buf, MAX_PATHLEN);
	print_name(src->name, src->info.st_mode);
	ft_putstr(" -> ");
	stat(buf, &info);
	print_name_endl(buf, info.st_mode);
}