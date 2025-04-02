/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:18:11 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 11:18:24 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */


#include "bsq.h"

int		main(int ac, char **av)
{
	t_map		*map;
	int			i;

	// If it doesn't have 4 arguments the program starts typing on the terminal itself
	if (ac < 2)
	{
		// Create the map according to what was written at the terminal
		map = ft_create_map("STDIN");

		// If it is not empty, process the map
		if (map)
			ft_process_map(map);
		return (0);
	}
	i = 1;
	
	// go through the all arguments
	while (i < ac)
	{
		// generates the map according to the mapa name received
		map = ft_create_map(av[i]);

		// If it is not empty, process the created map
		if (map)
			ft_process_map(map);
		i++;

		// If there are more arguments, it generates a new line between the Maps
		if (i < ac)
			write(1, "\n", 1);
	}
	return (0);
}
