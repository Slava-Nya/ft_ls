/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nstrjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:20:11 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/08 16:20:11 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "str_lib.h"

char			*ft_nstrjoin(int n, ...)
{
	va_list		args;
	size_t		len;
	int			ncpy;
	char		*str;

	len = 0;
	ncpy = n;
	va_start(args, n);
	while (n--)
		len += ft_strlen(va_arg(args, char *));
	va_end(args);
	if (!(str = ft_strnew(len)))
		return (NULL);
	va_start(args, n);
	while (ncpy--)
		str = ft_strcat(str, va_arg(args, char *));
	va_end(args);
	return (str);
}
