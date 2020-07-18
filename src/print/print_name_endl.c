/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name_endl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:39:03 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:39:10 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "str_lib.h"

void	print_name_endl(char *name, int mode)
{
	print_name(name, mode);
	ft_putstr("\n");
}
