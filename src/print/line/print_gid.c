/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_gid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:18:20 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:24:51 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print.h>
#include <libft.h>
#include <print_line.h>

void	print_gid(char *gid, int max_gid)
{
	print_col(gid, (int (*)(void *)) ft_putstr, max_gid);
}
