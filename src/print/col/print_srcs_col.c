/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_srcs_col.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:27:54 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:27:57 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_col.h"
#include "str_lib.h"

void			print_srcs_col(t_avl *srcs, char *path)
{
	t_print_col attr;

	init_col_attr(srcs, &attr);
	walk_srcs_col(srcs, path, &attr);
	if (attr.id || !attr.n)
		ft_putstr("\n");
	free(attr.widths);
}
