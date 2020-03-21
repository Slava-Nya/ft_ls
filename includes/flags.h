//
// Created by youpaw on 11.03.2020.
//

#ifndef FLAGS_H
#define FLAGS_H
# define ROW_FLAGS "Clog1"
# define SORT_FLAGS "ctufUXS"
# define FLAGS "-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1"
# define N_FLAGS 38

enum e_print_flags
{
	f_col, // C flag, print by cols
	f_line, // x flag, print by lines
	f_1perl // 1 flag, print 1 per line
};

enum e_sort_flags
{
	f_unset, // f and U flags, do not sort
	f_ascii, // X flag, sort by ascii, default set
	f_mtime, // t flag, sort by modification time
	f_ctime, // c flag, sort by creation time
	f_atime, // u flag, sort by access time
	f_size // S flag, sort by size
};

struct	s_flags
{
	enum e_print_flags print;
	enum e_sort_flags sort;
	char rest[N_FLAGS];
};

typedef struct s_flags t_flags;
typedef enum e_sort_flags t_sort_flags;
typedef enum e_print_flags t_print_flags;

void			del_flags(t_flags **flags);
t_flags			*init_flags(void);
int				parse_flags(t_flags *flags, int argc, char **argv);

#endif //FLAGS_H
