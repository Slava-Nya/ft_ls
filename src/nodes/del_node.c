/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:29:05 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:29:08 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "nodes.h"

void	del_node(t_node **node)
{
	ft_del_avl(&((*node)->srcs), (void (*)(void *)) &del_src);
	free(*node);
	*node = NULL;
}
