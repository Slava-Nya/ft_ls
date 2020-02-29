/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:50:43 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec_lib.h"
#include "mem_lib.h"

t_vector	*ft_vector_init(size_t capacity, size_t datasize)
{
	t_vector *vector;

	if (!(vector = (t_vector*)malloc(sizeof(t_vector))))
		return (NULL);
	if (!(vector->data = malloc(datasize * capacity + datasize)))
	{
		free(vector);
		return (NULL);
	}
	ft_bzero(vector->data, datasize * capacity + datasize);
	vector->datasize = datasize;
	vector->capacity = capacity;
	vector->size = 0;
	return (vector);
}
