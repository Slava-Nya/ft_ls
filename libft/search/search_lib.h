//
// Created by youpaw on 03.03.2020.
//

#ifndef SEARCH_LIB_H
#define SEARCH_LIB_H

typedef struct		s_avl
{
	void			*content;
	struct s_avl	*left;
	struct s_avl	*right;
	int				height;
}					t_avl;

int 				ft_get_height(t_avl *node);

int 				ft_get_balance(t_avl *node);

t_avl				*ft_new_node(void *content);

t_avl				*ft_right_rotate(t_avl *y);

t_avl				*ft_left_rotate(t_avl *x);

t_avl				*ft_insert_avl(t_avl *node, void *content, void *params, \
int (*cmp)(const void *, const void *, void *));

#endif //SEARCH_LIB_H
