/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 21:29:37 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list_lib.h"
#include "mem_lib.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlst;

	if ((newlst = (t_list*)ft_memalloc(sizeof(t_list))))
	{
		if (!content)
		{
			newlst->content = NULL;
			newlst->content_size = 0;
		}
		else if ((newlst->content = ft_memalloc(content_size)))
		{
			newlst->content = ft_memcpy(newlst->content, content, content_size);
			newlst->content_size = content_size;
		}
		else
		{
			free(newlst);
			return (NULL);
		}
		newlst->next = NULL;
	}
	else
		return (NULL);
	return (newlst);
}
