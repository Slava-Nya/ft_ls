/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_gid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:27:23 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:27:28 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print.h>
#include <libft.h>
#include <print_line.h>

void	print_gid(char *gid, int max_gid)
{
	print_col(gid, ft_putstr, max_gid + LN_PADDING);
}
