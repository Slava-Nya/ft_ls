/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_src.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:08:09 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:08:44 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"
#include "mem_lib.h"
#include "str_lib.h"

t_src	*init_src(char name[MAX_FILENAME], struct stat info)
{
	t_src	*new_src;

	new_src = ft_xmalloc(sizeof(t_src));
	new_src->info = info;
	ft_strcpy(new_src->name, name);
	new_src->len = ft_strlen(name);
	return (new_src);
}
