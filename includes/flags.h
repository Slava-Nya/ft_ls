/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 12:39:39 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:59:57 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# define FLAGS "-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1"
# define N_FLAGS 38
# define N_SORT_FLAGS 6
# define N_PRINT_FLAGS 7

/*
**	f_col, // C flag, print by cols
**	f_line, // x flag, print by lines
**	f_1perl // 1 flag, print 1 per line
*/
enum					e_print_flags
{
	f_col,
	f_line,
	f_1perl
};

/*
**	f_unset, // f and U flags, do not sort
**	f_ascii, // X flag, sort by ascii, default set
**	f_mtime, // t flag, sort by modification time
**	f_ctime, // c flag, sort by creation time
**	f_atime, // u flag, sort by access time
**	f_size // S flag, sort by size
*/

enum					e_sort_flags
{
	f_unset,
	f_ascii,
	f_mtime,
	f_ctime,
	f_atime,
	f_size
};

struct					s_map_sort
{
	int					index;
	char				c;
	enum e_sort_flags	map;
};

struct					s_map_print
{
	int					index;
	char				c;
	enum e_print_flags	map;
};

typedef struct			s_flags
{
	int 				is_error;
	enum e_print_flags	print;
	enum e_sort_flags	sort;
	enum e_sort_flags	display;
	char				all[N_FLAGS];
}						t_flags;

static const struct s_map_sort g_map_sort[N_SORT_FLAGS] =
{
	{17, 'c', f_ctime},
	{33, 't', f_mtime},
	{34, 'u', f_atime},
	{20, 'f', f_unset},
	{13, 'U', f_unset},
	{11, 'S', f_size}
};

static const struct s_map_print g_map_print[N_PRINT_FLAGS] =
{
	{3, 'C', f_col},
	{21, 'g', f_1perl},
	{25, 'l', f_1perl},
	{27, 'n', f_1perl},
	{28, 'o', f_1perl},
	{37, '1', f_1perl},
	{36, 'x', f_line}
};

void					flags_error(char c);
void					del_flags(t_flags **flags);
t_flags					*init_flags(void);
int						parse_flags(t_flags *flags, int argc, char **argv);
int						get_flag(t_flags *flags, char c);

#endif
