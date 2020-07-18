/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_date.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:18:15 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 20:33:37 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"
#include "print_line.h"
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "libft.h"
#include "str_lib.h"

static time_t	get_flag_time(struct stat info, t_flags *flags)
{
	if (flags->display == f_ctime)
		return (info.st_ctimespec.tv_sec);
	else if (flags->display == f_atime)
		return (info.st_atimespec.tv_sec);
	else
		return (info.st_mtimespec.tv_sec);
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
	{
		ft_putstr(" ");
		date = ft_strtrim(date + 19);
		ft_putstr(date);
		free(date);
	}
	else
		write(1, date + 11, 5);
	ft_putchar(' ');
}
