/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nlink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:26:36 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:26:39 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print.h>
#include <libft.h>
#include <print_line.h>

void		print_nlink(int st_nlink, int max_links)
{
	print_col_right(st_nlink, &ft_putnbr, &ft_numlen, max_links);
	ft_putchar(' ');
}
