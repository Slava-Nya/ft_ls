/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:00:11 by slavanya          #+#    #+#             */
/*   Updated: 2020/07/18 14:00:08 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nodes.h"
#include "ls.h"
#include "sort_lib.h"
#include "str_lib.h"

int     main(int argc, char **argv)
{
	int		skip;
	t_flags	*flags;
	t_list	*nodes;

	flags = init_flags();
	flags->all[37] = 1;
	flags->print = f_1perl;
	skip = parse_flags(flags, argc, argv);
	quick_sort((void **) argv, skip, argc - 1, \
		(int (*)(const void *, const void *)) ft_strcmp);
	nodes = parse_args(argc, argv, skip, flags);
	if (nodes)
	{
		print_args(nodes, flags);
		ft_lstdelone(&nodes, (void (*)(void *)) &del_node);
	}
	del_flags(&flags);
	return (0);
}
