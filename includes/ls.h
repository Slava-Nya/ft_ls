//
// Created by youpaw on 12.03.2020.
//

#ifndef LS_H
#define LS_H
#include "flags.h"
#include "list_lib.h"

void	print_args(t_list *nodes, t_flags *flags);

t_list *parse_args(int argc, char **argv, int skip, t_flags *flags);

#endif //LS_H
