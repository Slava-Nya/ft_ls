/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_col.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:37:39 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:37:47 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"

void	print_col(void *data, int (*print)(void *), int width)
{
	int		cnt;

	cnt = print(data);
	while (cnt++ < width)
		ft_putstr(" ");
}
