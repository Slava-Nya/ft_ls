/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:23:10 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 12:55:23 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <sys/stat.h>
# include <dirent.h>
# include "avl_lib.h"
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
void					del_src(t_src **src);
int						cmp_srcs(t_src *src1, t_src *src2, t_flags *flags);

#endif
