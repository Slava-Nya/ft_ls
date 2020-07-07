/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:24:50 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:24:53 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"

void	print_col(void *data, int (*print)(void *), int width)
{
	int cnt;

	cnt = print(data);
	while (cnt++ < width)
		ft_putstr(" ");
}
