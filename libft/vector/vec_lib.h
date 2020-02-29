//
// Created by youpaw on 29.02.2020.
//

#ifndef VEC_LIB_H
# define VEC_LIB_H
# include <stdlib.h>

typedef struct		s_vector
{
	void			*data;
	size_t			datasize;
	size_t			capacity;
	size_t			size;
}					t_vector;

t_vector			*ft_vector_init(size_t capacity, size_t datasize);
int					ft_vector_push(t_vector *vector, void *data);
size_t				ft_vector_remove(t_vector *vector, size_t size);
void				ft_vector_del(t_vector **vector);

#endif //VEC_LIB_H
