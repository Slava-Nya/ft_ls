/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:21:58 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 12:39:29 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODES_H
# define NODES_H
# include "srcs.h"

struct					s_node
{
	char				path[MAX_PATHLEN];
	struct stat			info;
	t_avl				*srcs;
};

typedef struct s_node	t_node;

t_node					*get_file_node(char *argv, struct stat info, \
						t_flags *flags);
t_node					*get_dir_node(char *argv, struct stat info);
t_node					*get_node(char *argv, t_flags *flags);
void					del_node(t_node **node);
int						cmp_nodes(t_node *node1, t_node *node2, t_flags *flags);

#endif
