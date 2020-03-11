/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slavanya <slavanya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 00:00:11 by slavanya          #+#    #+#             */
/*   Updated: 2020/02/27 18:34:03 by slavanya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

int     main(int argc, char **argv)
{
	int		skip;
	t_flags	*flags;

	flags = init_flags();
    skip = parse_flags(flags, --argc, ++argv);
    return (0);
}
