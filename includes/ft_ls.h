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
# include "../libft/libft.h"
# include <stdio.h>
# include <string.h>
#include <dirent.h>
# define FLAGS "-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1"

struct      s_node
{
    char    *path;
    char    *error;
    // struct  *stat;
    // s_srcs  *srcs;
    // s_nodes *next;
}           t_node;

enum e_sort{
    TIME,
    UNSET,
    NAME
};

typedef struct s_flags{
    enum e_sort sort; 
}               t_flags;

#endif