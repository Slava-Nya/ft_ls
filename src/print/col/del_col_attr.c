//
// Created by youpaw on 27.03.2020.
//

#include <stdlib.h>
#include "print_col.h"

void		del_col_attr(t_print_col **attr)
{
	if (!attr || !*attr)
		return ;
	free(*attr);
	*attr = NULL;
}