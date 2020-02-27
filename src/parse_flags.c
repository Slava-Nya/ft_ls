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

#include "ft_ls.h" 

static int get_flag(char *flag_arr, char c)
{
    int cnt;

    cnt = 0;
    while (cnt < N_REST_FLAGS && REST_FLAGS[cnt] != c)
        cnt++;
    if (cnt < N_REST_FLAGS)
    {
        flag_arr[cnt] = REST_FLAGS[cnt];
        return (0);
    }
    return (1);
}

static int get_clwr_flag(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
    while (SORT_FLAGS[cnt] && SORT_FLAGS[cnt] != c)
        cnt++;
    if (SORT_FLAGS[cnt])
    {
        if (flags->clrw != 'l' && SORT_FLAGS[cnt] != '1')
            flags->clrw = SORT_FLAGS[cnt];
        return (0);
    }
    return (1);
}

static int get_sort_flag(t_flags *flags, char c)
{
	int cnt;

	cnt = 0;
	while (CLRW_FLAGS[cnt] && CLRW_FLAGS[cnt] != c)
		cnt++;
	if (CLRW_FLAGS[cnt])
	{
		flags->sort = CLRW_FLAGS[cnt];
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
            if (get_clwr_flag(flags, *flags_str)\
                && get_sort_flag(flags, *flags_str)\
                && get_flag(flags->rest, *flags_str))
                return (-1);
            flags_str++;
        }
        cnt++;
    }
    return (cnt);
}
