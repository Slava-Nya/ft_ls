/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env_field.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 18:10:40 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/18 14:44:39 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_isfnend(char c)
{
	if (!c || c == '=')
		return (1);
	return (0);
}

char		*ft_get_env_field(char **en, const char *field)
{
	size_t	count;
	size_t	len;

	if (!en || !*en || !field)
		return (NULL);
	count = 0;
	while (en[count])
	{
		len = 0;
		while (!ft_isfnend(en[count][len]) && !ft_isfnend(field[len]) \
		&& en[count][len] == field[len])
			len++;
		if (ft_isfnend(en[count][len]) && ft_isfnend(field[len]))
			return (en[count]);
		count++;
	}
	return (NULL);
}
