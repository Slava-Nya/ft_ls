/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:38:51 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:39:00 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "str_lib.h"
#include <sys/stat.h>

void	print_name(char *name, int mode)
{
	(void) mode;
//	if (S_ISREG(mode) && (mode & S_IXUSR))
//		ft_putstr(COL_EXE);
//	else if (S_ISREG(mode))
//		ft_putstr(COL_REG);
//	else if (S_ISDIR(mode))
//		ft_putstr(COL_DIR);
//	else if (S_ISLNK(mode))
//		ft_putstr(COL_LNK);
//	else if (S_ISCHR(mode))
//		ft_putstr(COL_CHR);
//	else if (S_ISFIFO(mode))
//		ft_putstr(COL_IFO);
//	else if (S_ISBLK(mode))
//		ft_putstr(COL_BLK);
//	else if (S_ISSOCK(mode))
//		ft_putstr(COL_SOCK);
//	else
//		ft_putstr(COL_ERR);
	ft_putstr(name);
//	ft_putstr(COL_CLR);
}
