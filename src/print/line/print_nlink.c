/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nlink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:18:34 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:30:12 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "libft.h"
#include "print_line.h"

void	print_nlink(int st_nlink, int max_links)
{
	ft_putchar(' ');
	print_col_right((void *)((size_t)st_nlink), (int (*)(void *))&ft_putnbr, \
	(int (*)(void *))&ft_numlen, max_links);
	ft_putchar(' ');
}
