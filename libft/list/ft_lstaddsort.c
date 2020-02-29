/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:03:05 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_lib.h"
#include "math_lib.h"

void	ft_lstaddsort(t_list **list, t_list *newlist, \
		int (*cmp)(const void *, const void *, size_t))
{
	t_list *prev;
	t_list *head;

	if (!list || !newlist || !cmp)
		return ;
	if (!*list)
	{
		*list = newlist;
		return ;
	}
	prev = NULL;
	head = *list;
	while (head && cmp(head->content, newlist->content, \
	ft_min(head->content_size, newlist->content_size)) < 0)
	{
		prev = head;
		head = head->next;
	}
	newlist->next = head;
	if (!prev)
		*list = newlist;
	else
		prev->next = newlist;
}
