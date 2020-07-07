/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name_endl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:25:20 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:25:32 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "str_lib.h"

void	print_name_endl(char *name, int mode)
{
	print_name(name, mode);
	ft_putstr("\n");
}
