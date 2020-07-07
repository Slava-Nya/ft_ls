/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:29:22 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:29:25 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

int			parse_flags(t_flags *flags, int argc, char **argv)
{
	int		cnt;
	char	*flags_str;

	cnt = 1;
	while (cnt < argc && *argv[cnt] == '-' && *(argv[cnt] + 1))
	{
		flags_str = argv[cnt] + 1;
		if (*flags_str == '-' && !*(flags_str + 1))
		{
			cnt++;
			break ;
		}
		while (*flags_str)
		{
			if (get_flag(flags, *flags_str))
				flags_error(*flags_str);
			flags_str++;
		}
		cnt++;
	}
	return (cnt);
}
