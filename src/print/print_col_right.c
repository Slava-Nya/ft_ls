/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_col_right.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:24:43 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:24:46 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"

void	print_col_right(void *data, int (*print)(void *),
			int (*len)(void *), int width)
{
	int cnt;

	cnt = width - len(data);
	while (cnt-- > 0)
		ft_putstr(" ");
	print(data);
}
