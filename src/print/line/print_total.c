//
// Created by slavanya on 10.04.2020.
//

#include <libft.h>
#include <flags.h>
#include <print_line.h>

void 	print_total(t_flags *flags, size_t total)
{
	char data[5];

	ft_putstr("total ");
	total /= BLOCK_SIZE;
	ft_putnbr(total);
	ft_putchar('\n');
}