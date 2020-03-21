//
// Created by youpaw on 17.03.2020.
//

#include "str_lib.h"
#include <string.h>
#include <errno.h>

void	print_error(char *path)
{
	ft_putstr_fd("ls: ", 2);
	ft_putstr_fd("", 2);
	ft_putstr_fd(" '", 2);
	ft_putstr_fd(path, 2);
	ft_putstr_fd("': ", 2);
	ft_putendl_fd(strerror(errno), 2);
}
