//
// Created by slavanya on 30.03.2020.
//
#include <stdio.h>
#include <flags.h>
#include <sys/stat.h>
#include <zconf.h>
#include <print_line.h>

//static void		print_h_flag()

void 	print_size(struct stat info, t_max_values max, t_flags *flags)
{
//	if (str[0] != 'c' && str[0] != 'b')
//		ft_printf("  %*lld", size[4], file->size);
//	else
//	{
//		ft_printf(" %*d", size[5], major(file->st_rdev));
//		ft_printf(", %*d", size[6], minor(file->st_rdev));
//	}
//



	if (S_ISBLK(info.st_mode) || S_ISCHR(info.st_mode))
	{
		printf(" %*d ", max.major, major(info.st_rdev));
		printf("z %d ", max.minor, minor(info.st_dev));\
	}
	else if (flags->all[22])
	{

	}
}