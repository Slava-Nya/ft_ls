
#include "flags.h"
#include "nodes.h"
#include <errno.h>

t_node	*get_node(char *argv, t_flags *flags) //Ето должно быть в get_node
{
//	int		type;
//	struct	stat info;
//
//	if (flags->rest[18] || flags->rest[23] || flags->rest[25] || flags->rest[26])
//		lstat(argv, &info);
//	else if (stat(argv, &info))
//	{
//		errno = 0;
//		lstat(argv, &info);
//	}
//	if (errno)
//		return (get_error_node(argv));
//	type = info.st_mode & S_IFMT;
//	if (!flags->rest[18] && type == S_IFDIR)
//	{
//		if (opendir(argv))
//			return (get_error_node(argv));
//		node->srcs = get_srcs(opendir(argv), flags)
//		read_dir(nodes, argv);
//		printf("thats dir\n");
//		return ;
//	}
//	else
//	{
//		save_argv(nodes, info, argv);
//		printf("thats file\n");
//	}
}