/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env_fval.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:44:44 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/18 14:44:44 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "env_lib.h"
#include "str_lib.h"

char	*ft_get_env_fval(char **en, const char *field)
{
	char *val;

	if ((val = ft_get_env_field(en, field)))
		val = ft_strchr(val, '=');
	if (val && !*(++val))
		val = NULL;
	return (val);
}
