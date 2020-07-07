/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:29:44 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:29:47 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"
#include "char_lib.h"
#include "flags.h"

void	flags_error(char c)
{
	ft_putstr_fd("ls: illegal option -- ", 2);
	ft_putchar_fd(c, 2);
	ft_putstr_fd("\nusage: ls [", 2);
	ft_putstr_fd(FLAGS, 2);
	ft_putstr_fd("] [file ...]\n", 2);
	exit(1);
}
