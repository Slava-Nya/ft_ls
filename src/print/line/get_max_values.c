//
// Created by slavanya on 29.03.2020.
//

#include <print_line.h>
#include <libft.h>
#include <pwd.h>
#include <grp.h>

static void		struct_bezero(t_max_values *max)
{
	max->links = 0;
	max->uid = 0;
	max->gid = 0;
	max->size = 0;
	max->date = 0;
}

static void 	get_max_len(struct stat info, t_max_values *max)
{
	int uid_len;
	int gid_len;

	uid_len = ft_strlen(getpwuid(info.st_uid)->pw_name);
	gid_len = ft_strlen(getgrgid(info.st_gid)->gr_name);
	if (uid_len > max->uid)
		max->uid = uid_len;
	if (gid_len > max->gid)
		max->gid = gid_len;
	max->size = ft_max(ft_lng(info.st_size), max->size);
	max->links = ft_max(ft_lng(info.st_nlink), max->links);
}

static void		get_elements(t_avl *srcs, t_max_values *max)
{
	struct stat tmp;

	if (!srcs)
		return ;
	get_elements(srcs->left, max);
	tmp = ((t_src*)srcs->content)->info;
	get_max_len(tmp, max);
	get_elements(srcs->right, max);

}

void 	get_max_values(t_avl *srcs, t_max_values *max)
{
	struct_bezero(max);
	get_elements(srcs, max);
}