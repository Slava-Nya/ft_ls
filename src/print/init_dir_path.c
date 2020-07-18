/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dir_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azomega <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:37:27 by azomega           #+#    #+#             */
/*   Updated: 2020/07/18 13:37:36 by azomega          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"

void	init_dir_path(char *dir_path, char *path)
{
	int		len;

	len = ft_strlen(path);
	ft_strcpy(dir_path, path);
	if (len && dir_path[len - 1] != '/')
	{
		dir_path[len++] = '/';
		dir_path[len] = '\0';
	}
}
