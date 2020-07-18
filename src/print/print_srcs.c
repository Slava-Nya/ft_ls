/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_srcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:39:31 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:39:44 by azomega          ###   ########.fr       */
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
K