#include "search_lib.h"
#include "math_lib.h"

t_avl				*ft_left_rotate(t_avl *x)
{
	t_avl *y;
	t_avl *t;

	y = x->right;
	t = y->left;
	y->left = x;
	x->right = t;
	y->height = (int)ft_max(ft_get_height(x->right), \
	ft_get_height(x->left)) + 1;
	y->height = (int)ft_max(ft_get_height(y->right), \
	ft_get_height(y->left)) + 1;
	return (y);
}
