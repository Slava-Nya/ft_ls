/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_col.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:30:31 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:30:33 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_COL_H
# define PRINT_COL_H
# include "srcs.h"
# define N_COL_PAD 2
# define COL_PAD " "

struct			s_srcs_params
{
	int			max_name;
	int			sum_name;
};

struct			s_print_col
{
	int			n;
	int			id;
	int			*widths;
};

typedef struct s_print_col		t_print_col;
typedef struct s_srcs_params	t_srcs_params;

void			init_col_attr(t_avl *srcs, t_print_col *attr);
void			print_srcs_col(t_avl *srcs, char *path);
void			walk_srcs_col(t_avl *srcs, char *path, t_print_col *attr);
void			walk_srcs_row(t_avl *srcs, t_print_col *attr);
void			print_src(t_src *src, char *path, t_print_col *attr);
#endif
