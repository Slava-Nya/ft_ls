/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelcircle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 18:47:50 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_lib.h"

void	ft_lstdelcircle(t_list **list, void (*del)(void*, size_t))
{
	t_list *check;
	t_list *head;
	t_list *tmp;

	if (!list || !*list)
		return ;
	check = *list;
	head = (*list)->next;
	while (check != head)
	{
		tmp = head;
		head = head->next;
		ft_lstdelone(&tmp, del);
	}
	ft_lstdelone(&check, del);
}
