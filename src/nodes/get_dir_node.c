/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dir_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:02:42 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:06:52 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nodes.h"
#include "str_lib.h"
#include "mem_lib.h"

t_node	*get_dir_node(char *argv, struct stat info)
{
	t_node	*new_node;

	new_node = (t_node*)ft_xmalloc(sizeof(t_node));
	new_node->info = info;
	ft_strcpy(new_node->path, argv);
	new_node->srcs = NULL;
	return (new_node);
}
