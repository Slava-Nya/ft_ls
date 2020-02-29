/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:04:12 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_lib.h"
#include "mem_lib.h"

int		ft_vector_push(t_vector *vector, void *data)
{
	void *pdata;

	if (!vector)
		return (22);
	if (vector->size >= vector->capacity)
	{
		pdata = vector->data;
		if (!(vector->data = \
		malloc(vector->datasize * vector->capacity * 2 + vector->datasize)))
		{
			vector->data = pdata;
			return (12);
		}
		vector->data = ft_memcpy(vector->data, pdata, \
		vector->datasize * vector->capacity);
		free(pdata);
		pdata = vector->data + vector->datasize * (vector->capacity + 1);
		ft_bzero(pdata, vector->datasize * vector->capacity);
		vector->capacity *= 2;
	}
	pdata = vector->data + vector->size * vector->datasize;
	ft_memcpy(pdata, data, vector->datasize);
	vector->size++;
	return (0);
}
