/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_date.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:18:15 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:30:54 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"
#include "str_lib.h"
#include "print_line.h"
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <libft.h>

static time_t	get_flag_time(struct stat info, t_flags *flags)
{
	if (flags->display == f_ctime)
		return (info.st_ctime);
	else if (flags->display == f_atime)
		return (info.st_atime);
	else
		return (info.st_mtime);
}

void			print_date(struct stat info, t_flags *flags)
{
	time_t	src_time;
	time_t	cur_time;
	char	*date;

	src_time = get_flag_time(info, flags);
	date = ctime(&src_time);
	time(&cur_time);
	write(1, date + 3, 8);
	if (src_time > cur_time || (cur_time - src_time) > HALF_YEAR)
		write(1, date + 19, 5);
	else
		write(1, date + 11, 5);
	ft_putchar(' ');
}
