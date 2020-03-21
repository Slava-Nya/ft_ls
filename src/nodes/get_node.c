
#include "flags.h"
#include "nodes.h"
#include "print.h"
#include <errno.h>
#include <stddef.h>

t_node			*get_node(char *argv, t_flags *flags)
{
	unsigned int	type;
	struct			stat info;

	if (flags->all[18] || flags->all[23] || flags->all[25] || flags->all[26])
		lstat(argv, &info);
	else if (stat(argv, &info))
	{
		errno = 0;
		lstat(argv, &info);
	}
	if (errno)
	{
		print_error(argv);
		return (NULL);
	}
	type = info.st_mode & S_IFMT;
	if (!flags->all[18] && type == S_IFDIR)
		return (get_dir_node(argv, info));
	else
		return (get_file_node(argv, info, flags));
}