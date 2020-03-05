#include "search_lib.h"

int 			ft_get_balance(t_avl *node)
{
	if (!node)
		return (0);
	return (ft_get_height(node->left) - ft_get_height(node->right));
}