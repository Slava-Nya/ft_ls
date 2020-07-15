/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:14:03 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/15 16:50:07 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nodes.h"
#include "flags.h"
#include "list_lib.h"

t_list		*parse_args(int argc, char **argv, int skip, t_flags *flags)
{
	t_list *nodes;
	t_node *node;

	nodes = NULL;
	if (skip == argc)
	{
		node = get_node(".", flags);
		ft_lstaddsort(&nodes, ft_lstnew(node), flags, &cmp_nodes);
	}
	else
	{
		while (skip < argc)
		{
			node = get_node(argv[skip], flags);
			ft_lstaddsort(&nodes, ft_lstnew(node), flags, &cmp_nodes);
			skip++;
		}
	}
	return (nodes);
}
