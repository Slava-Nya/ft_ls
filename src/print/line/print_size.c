/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:26:49 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:26:54 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <flags.h>
#include <sys/stat.h>
#include <zconf.h>
#include <print_line.h>
#include <print.h>
#include <libft.h>

void		print_size(struct stat info, t_max_values max, t_flags *flags)
{
	char	data[5];

	if (S_ISBLK(info.st_mode) || S_ISCHR(info.st_mode))
	{
		print_col_right(major(info.st_rdev), &ft_putnbr,
			&ft_numlen, max.major);
		ft_putchar(',');
		print_col_right(minor(info.st_rdev), &ft_putnbr,
			&ft_numlen, max.minor);
	}
	else if (flags->all[22])
	{
		get_human_readable(data, info.st_size);
		print_col_right(data, &ft_putstr, &ft_strlen, 4);
	}
	else
		print_col_right(info.st_size, &ft_putnbr, &ft_numlen,
				max.size);
}
