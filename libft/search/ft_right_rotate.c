#include "search_lib.h"
#include "math_lib.h"

t_avl				*ft_right_rotate(t_avl *y)
{
	t_avl *x;
	t_avl *t;

	x = y->left;
	t = x->right;
	x->right = y;
	y->left = t;
	y->height = (int)ft_max(ft_get_height(x->right), \
	ft_get_height(x->left)) + 1;
	y->height = (int)ft_max(ft_get_height(y->right), \
	ft_get_height(y->left)) + 1;
	return (x);
}