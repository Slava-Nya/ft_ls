/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:16:26 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"
#include "math_lib.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dstlen;
	size_t reslen;

	dstlen = ft_strlen(dst);
	reslen = ft_min(dstlen, size) + ft_strlen(src);
	if (size > dstlen)
	{
		dst += dstlen;
		size -= dstlen;
		while (*src && size-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (reslen);
}
