/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_flags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:58:06 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 12:58:19 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"
#include "mem_lib.h"

t_flags	*init_flags(void)
{
	t_flags *flags;

	flags = (t_flags*)ft_xmalloc(sizeof(t_flags));
	ft_bzero(flags->all, N_FLAGS);
	flags->sort = f_ascii;
	flags->print = f_col;
	flags->display = f_mtime;
	return (flags);
}
