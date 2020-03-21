//
// Created by youpaw on 17.03.2020.
//

#include "str_lib.h"
#include "print.h"
#include <string.h>

void	print_error(char *path)
{
	ft_putstr_fd("ls: cannot access '", 2);
	ft_putstr_fd(node->path, 2);
	ft_putstr_fd("': ", 2);
	ft_putendl_fd(strerror(node->error), 2);
}
