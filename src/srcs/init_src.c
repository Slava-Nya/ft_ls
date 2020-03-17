//
// Created by youpaw on 16.03.2020.
//

#include <libft.h>
#include "srcs.h"
#include "mem_lib.h"

t_src	*init_src(char name[MAX_FILENAME], struct stat info)
{
		t_src *new_src;

		new_src = ft_xmalloc(sizeof(t_src));
		new_src->info = info;
		ft_strcat(new_src->name, name);
		return(new_src);
}