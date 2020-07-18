/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_srcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:07:09 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:11:45 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"
#include "str_lib.h"

int		cmp_srcs(t_src *src1, t_src *src2, t_flags *flags)
{
	long	ret;

	if (flags->sort == f_unset)
		return (-1);
	ret = 0;
	if (flags->sort == f_mtime)
		ret = src2->info.st_mtimespec.tv_sec - src1->info.st_mtimespec.tv_sec;
	else if (flags->sort == f_ctime)
		ret = src2->info.st_ctimespec.tv_sec - src1->info.st_ctimespec.tv_sec;
	else if (flags->sort == f_atime)
		ret = src2->info.st_atimespec.tv_sec - src1->info.st_atimespec.tv_sec;
	else if (flags->sort == f_size)
		ret = src2->info.st_size - src1->info.st_size;
	if (ret == 0)
		ret = ft_strcmp(src1->name, src2->name);
	if (flags->all[31])
		ret *= -1;
	return ((int)ret);
}
