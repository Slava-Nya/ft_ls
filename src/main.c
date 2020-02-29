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

#include "ft_ls.h"
#include <stdio.h>

t_flags *init_flags(void)
{
    t_flags *flags;

    flags = (t_flags*)malloc(sizeof(t_flags));
    ft_bzero(flags->rest, N_REST_FLAGS);
    flags->sort = 'X';
    flags->col = 1;
    return (flags);
}

int     main(int argc, char **argv)
{
    // struct dirent	*dirread;
    // opendir("src");
    t_flags *flags;
    flags = init_flags();
    printf("%d\n", parse_flags(flags, --argc, ++argv));
    return (0);
}
