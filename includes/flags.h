/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:30:12 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:30:15 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# define FLAGS "-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1"
# define N_FLAGS 38
# define N_SORT_FLAGS 6
# define N_PRINT_FLAGS 7

enum		e_print_flags
{
	f_col,
	f_line,
	f_1perl
};

enum		e_sort_flags
{
	f_unset,
	f_ascii,
	f_mtime,
	f_ctime,
	f_atime,
	f_size
};

struct s_map_sort
{
	int	index;
	char c;
	enum e_sort_flags map;
};

struct			s_map_print
{
	int 		index;
	char 		c;
	enum 		e_print_flags map;
};

struct			s_flags
{
	enum 		e_print_flags print;
	enum		e_sort_flags sort;
	enum 		e_sort_flags display;
	char 		all[N_FLAGS];
};

static struct s_map_sort g_map_sort[N_SORT_FLAGS] =
{
		{17, 'c', f_ctime},
		{33, 't', f_mtime},
		{34, 'u', f_atime},
		{20, 'f', f_unset},
		{13, 'U', f_unset},
		{11, 'S', f_size}
};

static struct s_map_print g_map_print[N_PRINT_FLAGS] =
{
		{3, 'C', f_col},
		{21, 'g', f_1perl},
		{25, 'l', f_1perl},
		{27, 'n', f_1perl},
		{28, 'o', f_1perl},
		{37, '1', f_1perl},
		{36, 'x', f_line}
};

typedef struct	s_flags t_flags;

void 			flags_error(char c);
void			del_flags(t_flags **flags);
t_flags			*init_flags(void);
int				parse_flags(t_flags *flags, int argc, char **argv);
int				get_flag(t_flags *flags, char c);

#endif //FLAGS_H
