//
// Created by youpaw on 01.04.2020.
//

#include <libft.h>
#include "print.h"

void	print_link(char *path, t_src *src)
{
	char buf[NAME_MAX + 1];
	struct stat info;

	ft_bzero(buf, NAME_MAX + 1);
	ft_strcat(path, src->name);
	readlink(path, buf, NAME_MAX);
	path[ft_strlen(path) - ft_strlen(src->name)] = '\0';
	stat(buf, &info);
	print_name(src->name, src->info.st_mode);
	ft_putstr(" -> ");
	print_name_endl(buf, info.st_mode);
}