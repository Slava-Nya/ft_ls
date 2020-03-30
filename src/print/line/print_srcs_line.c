//
// Created by slavanya on 21.03.2020.
//

#include <print.h>
#include <print_line.h>
#include <grp.h>
#include <pwd.h>
#include <libft.h>
#include "srcs.h"
#include "str_lib.h"


/*
 * 1 - chmod -- st_mode
 * 2 * - количество жестких ссылок для файлов -- st_nlink
 * 3 * - владелец -- st_uid; getpwuid
 * 4 * - группа -- st_gid; getgrgid
 * 5 * - размер в байтах -- st_size;
 * 6 *для даты - дата последнего изменения -- st_mtim;
 * 7 - имя файла
 *
 * l o g n 1 m\
 *
 *
 */

static void	get_elements(t_avl *srcs, t_flags *flags, t_max_values max)
{
	t_src *tmp;

	if (!srcs)
		return ;
	get_elements(srcs->left, flags, max);
	tmp = (t_src *) srcs->content;
	print_mode(tmp->name, tmp->info.st_mode);
	print_link(tmp->info.st_nlink, max.links);
	print_uid(getpwuid((tmp->info).st_uid)->pw_name, max.uid);
	print_gid(getgrgid((tmp->info).st_gid)->gr_name, max.uid);
	print_size(tmp->info.st_size, flags, max.size);
	print_name_endl(tmp->name, tmp->info.st_mode);
	get_elements(srcs->right, flags, max);
}

void	print_srcs_line(t_avl *srcs, t_flags *flags)
{
	t_max_values max;

	get_max_values(srcs, &max);
	get_elements(srcs, flags, max);
}
