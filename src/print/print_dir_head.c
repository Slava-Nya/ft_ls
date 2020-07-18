/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dir_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:33:45 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 21:05:21 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"
#include "print.h"

void	print_dir_head(char *path, t_print *attr)
{
	if (attr->need_space)
		ft_putstr("\n");
	if (attr->need_head)
	{
		ft_putstr(path);
		ft_putendl(":");
	}
	attr->need_head = 1;
	attr->need_space = 1;
}
