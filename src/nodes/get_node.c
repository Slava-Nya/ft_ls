
#include "flags.h"
#include "nodes.h"
#include <errno.h>

t_node			*get_node(char *argv, t_flags *flags)
{
	unsigned int	type;
	struct			stat info;

	if (flags->rest[18] || flags->rest[23] || flags->rest[25] || flags->rest[26])
		lstat(argv, &info);
	else if (stat(argv, &info))
	{
		errno = 0;
		lstat(argv, &info);
	}
	if (errno)
		return (get_error_node(argv));
	type = info.st_mode & S_IFMT;
	if (!flags->rest[18] && type == S_IFDIR)
		return (get_dir_node(argv, info, flags));
	else
		return (get_file_node(argv, info));
}