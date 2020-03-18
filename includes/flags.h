//
// Created by youpaw on 11.03.2020.
//

#ifndef FLAGS_H
#define FLAGS_H
# define ROW_FLAGS "log1"
# define SORT_FLAGS "tfUXS"
# define REST_FLAGS "-ABCFGHLOPRTWabcdeghiklmnopqrsuwx1"
# define N_REST_FLAGS 31

struct	s_flags
{
	char col;
	char sort;
	char rest[N_REST_FLAGS];
};

typedef struct s_flags t_flags;

void			del_flags(t_flags **flags);
t_flags			*init_flags(void);
int				parse_flags(t_flags *flags, int argc, char **argv);

#endif //FLAGS_H
