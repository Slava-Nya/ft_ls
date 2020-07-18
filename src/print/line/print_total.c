/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_total.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:18:50 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:28:04 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "print_line.h"

void	print_total(size_t total)
{
	ft_putstr("total ");
	ft_putnbr(total);
	ft_putchar('\n');
}
