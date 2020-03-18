/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:50:11 by slavanya          #+#    #+#             */
/*   Updated: 2020/03/11 22:16:41 by slavanya         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "nodes.h"
#include "flags.h"
#include "list_lib.h"

t_list		*parse_args(int argc, char **argv, int skip, t_flags *flags) //Ето должно быть туть
{
	t_list *nodes;
	t_node *node;

	nodes = NULL;
	if (skip == argc)
	{
		//дописать случай когда не передано аргументов или переданы только флаги (в таком случае создается только одна нода с текущей дерикторией "."
	}
	else
	{
		while (skip < argc)
		{
			node = get_node(argv[skip], flags);
			ft_lstaddsort(&nodes, ft_lstnew(node, sizeof(t_node)), flags, \
						  (int (*)(const void *, const void *, \
								   void *)) &cmp_nodes);
			skip++;
		}
	}
	return (nodes);
}
