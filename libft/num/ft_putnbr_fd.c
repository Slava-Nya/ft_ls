/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 20:42:30 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_lib.h"

static void	ft_putunsnbr_fd(unsigned int n, int fd)
{
	if (n > 9)
		ft_putunsnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int t;

	if (fd == -1)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		t = (unsigned int)(~n + 1);
	}
	else
		t = (unsigned int)n;
	ft_putunsnbr_fd(t, fd);
}
