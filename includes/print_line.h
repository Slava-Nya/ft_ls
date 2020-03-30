//
// Created by youpaw on 24.03.2020.
//

#ifndef PRINT_LINE_H
#define PRINT_LINE_H

# define N_CHMOD 12

#include "srcs.h"

struct  s_max_values{
	int 	links;
	int 	uid;
	int 	gid;
	int 	size;
	int 	date;
};

typedef struct s_max_values	t_max_values;

void	print_srcs_line(t_avl *srcs, t_flags *flags);
void 	get_max_values(t_avl *srcs, t_max_values *max);
void	print_mode(char *path, int mode);
void	print_link(int st_nlink, int max_links);
void	print_uid(char *uid, int max_uid);
void 	print_gid(char *gid, int max_gid);
void 	print_size(int size, t_flags *flags, int max_size);

#endif //PRINT_LINE_H
