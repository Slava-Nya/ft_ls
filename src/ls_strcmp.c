/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:14:21 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 13:15:57 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_lib.h"

int		ls_strcmp(const char *s1, const char *s2)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char*)s1;
	ps2 = (unsigned char*)s2;
	while (*ps1 && *ps2)
	{
		if (ft_toupper(*ps1) != ft_toupper(*ps2))
			break ;
		ps1++;
		ps2++;
	}
	return (ft_toupper(*ps1) - ft_toupper(*ps2));
}
