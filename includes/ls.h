/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:19:16 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 12:55:23 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_H
# define LS_H
# include "flags.h"
# include "list_lib.h"

void	print_args(t_list *nodes, t_flags *flags);

t_list	*parse_args(int argc, char **argv, int skip, t_flags *flags);

#endif
