/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:13:21 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 11:13:26 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static bool		ft_isnumber(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int				ft_map_header(t_map *map, int file_name)
{
	char	buffer;
	char	rows[13];
	char	*prows;

	prows = rows;
	while (1)
	{
		if (read(file_name, &buffer, 1) < 1 || (prows - rows == 13))
			return (1);
		if (buffer == '\n')
			break ;
		*prows++ = buffer;
	}
	if (prows - rows >= 4)
	{
		map->full = *(prows - 1);
		map->obstacle = *(prows - 2);
		map->empty = *(prows - 3);
		*(prows - 3) = '\0';
	}
	else
		return (1);
	if (!ft_isnumber(rows) || map->empty == map->obstacle)
		return (1);
	return (!(map->rows = ft_atoi(rows)));
}

t_map	*ft_create_map(char *file_name)
{
	t_map	*map;
	int		file;

	if (!ft_strcmp(file_name, "STDIN"))
		file = STDIN_FILENO;
	else
		file = open(file_name, O_RDONLY);
	if (file == -1)
		return (ft_map_error());
	map = (t_map *)malloc(sizeof(t_map));
	if (ft_map_header(map, file))
	{
		free(map);
		return (ft_map_error());
	}
	if (ft_get_matrix(map, file))
	{
		ft_free_map(map);
		return (ft_map_error());
	}
	close(file);
	map->square_size = 0;
	return (map);
}
