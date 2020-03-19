//
// Created by youpaw on 16.03.2020.
//

#include "flags.h"
#include "list_lib.h"
#include "mem_lib.h"
#include "print.h"

static t_print *init_print(t_list *nodes)
{
	t_print *attr;

	attr = (t_print*)ft_xmalloc(sizeof(t_print));
	attr->need_head = nodes->next ? 1 : 0;
	attr->need_space = 0;
	return (attr);
}

void		print_args(t_list *nodes, t_flags *flags)
{
	t_print	*attr;
	t_list	*head;

	attr = init_print(nodes);
	print_node(nodes->content, flags, attr);
	head = nodes->next;
	while (head)
	{
		nodes = head;
		print_node(head->content, flags, attr);
		head = head->next;
		ft_lstdelone(&nodes, (void (*)(void *, size_t)) &del_node);
	}
}
