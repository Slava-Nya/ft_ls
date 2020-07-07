/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_srcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:25:50 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:25:54 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_col.h"
#include "print_line.h"

void	print_srcs(t_avl *srcs, char *path, t_flags *flags)
{
	if (!srcs)
		return ;
	if ((flags->print == f_col) || (flags->print == f_line))
		print_srcs_col(srcs, path);
	else
		print_srcs_line(srcs, path, flags);
}
