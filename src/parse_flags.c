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

int parse_flags(t_flags flags, int argc, char **argv)
{
    char *flags_str;

    while (**argv == '-')
    {
        flags_str = *argv + 1;
        
    }
}