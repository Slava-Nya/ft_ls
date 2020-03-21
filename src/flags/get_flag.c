//
// Created by slavanya on 21.03.2020.
//

#include "flags.h"

static void		apply_c_u_flag(t_flags *flags, char c)
{
	if (!flags->all[25])
	{
		if (c == 'c')
			flags->sort = f_ctime;
		else
			flags->sort = f_atime;
	}
}

static void		apply_f_flag(t_flags *flags)
{
	int cnt;

	cnt = 0;
	while (cnt < N_ENABLE_F)
		flags->all[g_enable_f[cnt++]] = 1;
	cnt = 0;
	while (cnt < N_DISABLE_F)
		flags->all[g_disable_f[cnt++]] = 1;
	flags->sort = f_unset;
}

static int	check_sort_flags(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
	while (SORT_FLAGS[cnt] && 	SORT_FLAGS[cnt] != c)
		cnt++;
	if (SORT_FLAGS[cnt] == c)
	{
		if (c == 'X')
			flags->sort = f_ascii;
		else if (c == 't')
			flags->sort= f_mtime;
		else if (c == 'S')
			flags->sort = f_size;
		else if (c == 'f')
			apply_f_flag(flags);
		else
			apply_c_u_flag(flags, c);
		return (0);
	}
	return (1);
}

static int	check_print_flag(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
	while (PRINT_FLAGS[cnt] && PRINT_FLAGS[cnt] != c)
		cnt++;
	if (PRINT_FLAGS[cnt] == c)
	{
		if (c == 'C')
			flags->print = f_col;
		else if (c == 'x')
			flags->print = f_line;
		else
			flags->print = f_1perl;
		return (0);
	}
	return (1);
}

int	get_flag(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
	while (cnt < N_FLAGS && FLAGS[cnt] != c)
		cnt++;
	if (cnt < N_FLAGS)
	{
		if (check_print_flag(flags, c))
			check_sort_flags(flags, c);
		(flags->all)[cnt] = FLAGS[cnt];
		return (0);
	}
	return (1);
}