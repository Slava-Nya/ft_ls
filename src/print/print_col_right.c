/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_col_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:37:51 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:38:02 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"

void	print_col_right(void *data, int (*print)(void *), int (*len)(void *), \
	int width)
{
	int		cnt;

	cnt = width - len(data);
	while (cnt-- > 0)
		ft_putstr(" ");
	print(data);
}
