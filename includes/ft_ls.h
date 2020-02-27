/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 23:59:58 by slavanya          #+#    #+#             */
/*   Updated: 2020/02/27 18:35:46 by slavanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_LS_H
# define FT_LS_H
# include "libft.h"
# include <stdio.h>
# include <string.h>
# include <dirent.h>
# define CLRW_FLAGS "C1l"
# define SORT_FLAGS "tfUXS"
# define REST_FLAGS "-ABFGHLOPRTWabcdeghikmnopqrsuwx"
# define N_REST_FLAGS 31

struct      s_node
{
    char    *path;
    char    *error;
    // struct  *stat;
    // s_srcs  *srcs;
    // s_nodes *next;
}           t_node;

typedef struct s_flags{
    char clrw;
    char sort;
    char rest[N_REST_FLAGS];
}               t_flags;

int     parse_flags(t_flags *flags, int argc, char **argv);

#endif