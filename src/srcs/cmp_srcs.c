/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_srcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:14:33 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/15 17:07:45 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ls.h"
#include "srcs.h"

int		cmp_srcs(t_src *src1, t_src *src2, t_flags *flags)
{
	long ret;

	if (flags->sort == f_unset)
		return (-1);
	ret = 0;
	if (flags->sort == f_mtime)
		ret = src2->info.st_mtime - src1->info.st_mtime;
	else if (flags->sort == f_ctime)
		ret = src2->info.st_ctime - src1->info.st_ctime;
	else if (flags->sort == f_atime)
		ret = src2->info.st_atime - src1->info.st_atime;
	else if (flags->sort == f_size)
		ret = src2->info.st_size - src1->info.st_size;
	if (ret == 0)
		ret = ls_strcmp(src1->name, src2->name);
	if (flags->all[31])
		ret *= -1;
	return ((int)ret);
}
