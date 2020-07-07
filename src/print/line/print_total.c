/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_total.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:27:08 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:27:11 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <flags.h>
#include <print_line.h>

void		print_total(t_flags *flags, size_t total)
{
	char	data[5];

	ft_putstr("total ");
	if (flags->all[22])
	{
		get_human_readable(data, total);
		ft_putstr(data);
	}
	else
		ft_putnbr(total);
	ft_putchar('\n');
}
