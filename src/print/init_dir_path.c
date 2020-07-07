/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_dir_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 15:24:34 by hlorrine          #+#    #+#             */
/*   Updated: 2020/07/07 15:24:39 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_lib.h"

void	init_dir_path(char *dir_path, char *path)
{
	int len;

	len = ft_strlen(path);
	ft_strcpy(dir_path, path);
	if (dir_path[len - 1] != '/')
	{
		dir_path[len++] = '/';
		dir_path[len] = '\0';
	}
}
