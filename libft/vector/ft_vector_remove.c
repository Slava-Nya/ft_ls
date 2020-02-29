/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:54:40 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_lib.h"
#include "mem_lib.h"

size_t	ft_vector_remove(t_vector *vector, size_t size)
{
	void *pdata;

	if (!size)
		return (0);
	if (!vector->size)
		return (0);
	if (size > vector->size)
		size = vector->size;
	pdata = vector->data + (vector->size - size) * vector->datasize;
	ft_bzero(pdata, vector->datasize * size);
	vector->size -= size;
	return (vector->size);
}
