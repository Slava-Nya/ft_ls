/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 01:02:08 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem_lib.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	if (size + 1 == 0)
		return (NULL);
	if (!(ptr = (char*)ft_memalloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memset(ptr, '\0', size + 1);
	return (ptr);
}
