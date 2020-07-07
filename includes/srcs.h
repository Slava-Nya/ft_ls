/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:30:50 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:31:28 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <sys/stat.h>
# include <dirent.h>
# include "search_lib.h"
# include "flags.h"
# define MAX_FILENAME 256
# define MAX_PATHLEN 256

struct					s_src
{
	char				name[MAX_FILENAME];
	int					len;
	struct stat			info;
};

typedef struct s_src	t_src;

t_src					*init_src(char name[MAX_FILENAME], struct stat info);
t_avl					*get_srcs(DIR *dir, char *argv, t_flags *flags);
int						cmp_srcs(t_src *src1, t_src *src2, t_flags *flags);

#endif
