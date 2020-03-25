//
// Created by slavanya on 21.03.2020.
//

#include <print.h>
#include <print_line.h>
#include <grp.h>
#include <pwd.h>
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
 */

void	print_src(t_src *src)
{
	print_mode(src->info.st_mode);
}

void	ft_max_struct_bezero(get_max_values *max)
{
	max->links = 0;
	max->uid = 0;
	max->guid = 0;
	max->size = 0;
	max->date = 0;
}

int 	get_max_len(t_max_values *max, struct stat info)
{
	int uid_len;
	int gid_len;

	uid_len = ft_strlen(getpwuid(info.st_uid)->pw_name);
	gid_len = ft_strlen(getgrgid(info.st_gid)->gr_name);
	if (uid_len > max->uid)
		max->uid = uid_len;
	if (gid_len > max->gid)
		max->gid = gid_len;
	if (info.st_nlink > max->links)+
		max->links = info.st_nlink;
	if (info.st_size > max.size)
		max->size = info.st_size;
}

		void	get_elements(t_avl *srcs, t_flags *flags, t_max_values *max)
{
	struct stat *tmp;

	if (!srcs)
		return ;
	get_elements(srcs->left, flags);
	tmp = srcs->content.info;
	get_max_len(max, tmp);
	print_src(srcs->content);
	get_elements(srcs->right, flags);
}
