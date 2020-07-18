/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:58:06 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:06:52 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"
#include "mem_lib.h"

t_flags	*init_flags(void)
{
	t_flags *flags;

	flags = (t_flags*)ft_xmalloc(sizeof(t_flags));
	flags->is_error = 0;
	ft_bzero(flags->all, N_FLAGS);
	flags->sort = f_ascii;
	flags->print = f_col;
	flags->display = f_mtime;
	return (flags);
}
