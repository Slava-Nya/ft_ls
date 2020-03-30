//
// Created by youpaw on 24.03.2020.
//

#ifndef PRINT_LINE_H
#define PRINT_LINE_H

# define N_CHMOD 12
# define HALF_YEAR 15778800
# define LN_PADDING 1

#include "srcs.h"

struct  s_max_values{
	int		links;
	int 	uid;
	int 	gid;
	int		size;
	int 	major;
	int 	minor;
};

typedef struct s_max_values	t_max_values;

void	print_srcs_line(t_avl *srcs, t_flags *flags);
void 	get_max_values(t_avl *srcs, t_max_values *max);
void	print_mode(char *path, int mode);
void	print_nlink(int st_nlink, int max_links);
void	print_uid(char *uid, int max_uid);
void 	print_gid(char *gid, int max_gid);
void 	print_size(struct stat info, t_max_values max, t_flags *flags);
void 	print_date(struct stat info, t_flags *flags);

#endif //PRINT_LINE_H
