/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:13:50 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 13:39:17 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nodes.h"
#include "ls.h"

int				main(int argc, char **argv)
{
	int			skip;
	t_flags		flags;
	t_list		*nodes;

	flags = init_flags();
	skip = parse_flags(flags, argc, argv);
	nodes = parse_args(argc, argv, skip, flags);
	print_args(nodes, flags);
	ft_lstdelone(&nodes, (void (*)(void *)) &del_node);
	del_flags(&flags);
	return (0);
}
