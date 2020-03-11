/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 21:30:22 by slavanya          #+#    #+#             */
/*   Updated: 2020/02/27 18:41:32 by slavanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

static int	isrow(char c)
{
	int cnt;

	cnt = 0;
	while (ROW_FLAGS[cnt] && ROW_FLAGS[cnt] != c)
		cnt++;
	if (ROW_FLAGS[cnt])
		return (1);
	return (0);
}

static int	get_flag(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
	while (cnt < N_REST_FLAGS && REST_FLAGS[cnt] != c)
		cnt++;
	if (cnt < N_REST_FLAGS)
	{
		if (c == 'C')
			flags->col = 1;
		else if (isrow(c))
			flags->col = 0;
		(flags->rest)[cnt] = REST_FLAGS[cnt];
		return (0);
	}
	return (1);
}

static int get_sort_flag(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
	while (SORT_FLAGS[cnt] && SORT_FLAGS[cnt] != c)
		cnt++;
	if (SORT_FLAGS[cnt])
	{
		flags->sort = SORT_FLAGS[cnt];
		return (0);
	}
	return (1);
}

int parse_flags(t_flags *flags, int argc, char **argv)
{
	int cnt;
	char *flags_str;

	cnt = 0;
	while (cnt < argc && *argv[cnt] == '-' && *(argv[cnt] + 1))
	{
		flags_str = argv[cnt] + 1;
		while (*flags_str)
		{
			if (get_sort_flag(flags, *flags_str)\
				&& get_flag(flags, *flags_str))
				return (-1);
			flags_str++;
		}
		cnt++;
	}
	return (cnt);
}
