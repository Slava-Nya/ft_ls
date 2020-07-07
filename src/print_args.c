/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:14:11 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 13:15:57 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"
#include "list_lib.h"
#include "mem_lib.h"
#include "print.h"

static void		init_print(t_list *nodes, t_print *attr)
{
	attr->need_head = nodes->next ? 1 : 0;
	attr->need_space = 0;
}

void			print_args(t_list *nodes, t_flags *flags)
{
	t_print	attr;
	t_list	*head;

	init_print(nodes, &attr);
	print_node(nodes->content, flags, &attr);
	head = nodes->next;
	while (head)
	{
		nodes = head;
		print_node(head->content, flags, &attr);
		head = head->next;
		ft_lstdelone(&nodes, (void (*)(void *)) &del_node);
	}
}
