/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:27:14 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:27:19 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print.h>
#include <libft.h>
#include <print_line.h>

void	print_uid(char *uid, int max_uid)
{
	print_col(uid, &ft_putstr, max_uid + LN_PADDING);
}
