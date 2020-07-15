/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_link.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:26:23 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/15 17:04:21 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"
#include "mem_lib.h"
#include "print.h"
#include <zconf.h>

static int		get_link_path(char *path, char *name, char *buf)
{
	int			ret;
	struct stat info;

	ft_bzero(buf, MAX_PATHLEN);
	ft_strcat(path, name);
	readlink(path, buf, MAX_PATHLEN);
	ret = stat(path, &info) ? -1 : info.st_mode;
	path[ft_strlen(path) - ft_strlen(name)] = '\0';
	return (ret);
}

void			print_link(char *path, t_src *src)
{
	char		buf[MAX_PATHLEN];
	int			mode;

	mode = get_link_path(path, src->name, buf);
	mode < 0 ? print_name(src->name, -1)
		: print_name(src->name, src->info.st_mode);
	ft_putstr(" -> ");
	print_name_endl(buf, mode);
}
