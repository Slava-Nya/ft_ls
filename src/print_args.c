//
// Created by youpaw on 16.03.2020.
//

#include "flags.h"
#include "list_lib.h"
#include "print.h"

static void	del(t_node **node, size_t size)
{
	free(*node);
	*node = NULL;
	(void)size;
}

static t_print init_print(t_list *nodes)
{
	t_print attr;

	attr.need_head = nodes->next ? 1 : 0;
	attr.need_space = 0;
	return (attr);
}

void		print_args(t_list **nodes, t_flags *flags)
{
	t_list *head;
	t_print attr;

	head = *nodes;
	attr = init_print(head);
	while (head)
	{
		print_node(head->content, flags, attr);
		head = head->next;
		free(*nodes);
		*nodes = head;
	}
}
