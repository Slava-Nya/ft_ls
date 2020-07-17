//
// Created by slavanya on 30.03.2020.
//

#include <print.h>
#include <libft.h>
#include <print_line.h>

void print_nlink(int st_nlink, int max_links)
{
	print_col_right((void *) ((size_t) st_nlink), (int (*)(void *)) &ft_putnbr, \
    	(int (*)(void *)) &ft_numlen, max_links);
	ft_putchar(' ');
}