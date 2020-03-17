/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:00:11 by slavanya          #+#    #+#             */
/*   Updated: 2020/03/16 22:29:45 by slavanya         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "nodes.h"
#include "ls.h"

int     main(int argc, char **argv)
{
	int		skip;
	t_flags	*flags;
	t_list	*nodes;
	t_node *tmp;

	flags = init_flags();
    skip = parse_flags(flags, --argc, ++argv);
    nodes = parse_args(argc, argv, skip, flags);
    tmp = nodes->content;
    ft_putstr("yeeeah");
    return (0);
}
