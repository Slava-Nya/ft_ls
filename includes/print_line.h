/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_line.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:47:06 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 12:48:22 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_LINE_H
# define PRINT_LINE_H

# define N_CHMOD 12
# define HALF_YEAR 15778800

# include "srcs.h"
# include <zconf.h>

typedef struct	s_max_values{
	int			links;
	int			uid;
	int			gid;
	int			size;
	int			major;
	int			minor;
	int			total;
}				t_max_values;

void			print_srcs_line(t_avl *srcs, char *path, t_flags *flags);
void			get_max_values(t_avl *srcs, t_max_values *max);
void			print_mode(char *path, int mode);
void			print_nlink(int st_nlink, int max_links);
void			print_uid(char *uid, int max_uid);
void			print_gid(char *gid, int max_gid);
void			print_size(struct stat info, t_max_values max, t_flags *flags);
void			print_date(struct stat info, t_flags *flags);
void			print_link(char *path, t_src *src);
void			print_total(size_t total);
void			get_human_readable(char data[5], size_t size);

#endif
