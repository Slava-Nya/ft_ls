//
// Created by youpaw on 27.03.2020.
//

#include "char_lib.h"

int		ls_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (*ps1 && *ps2)
	{
		if (ft_tolower(*ps1) != ft_tolower(*ps2))
			break ;
		ps1++;
		ps2++;
	}
	return (ft_tolower(*ps1) - ft_tolower(*ps2));
}
