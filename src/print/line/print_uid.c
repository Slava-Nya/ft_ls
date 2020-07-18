/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:18:54 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:18:55 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <print.h>
#include <libft.h>
#include <print_line.h>

void	print_uid(char *uid, int max_uid)
{
	print_col(uid, (int (*)(void *)) &ft_putstr, max_uid);
}
