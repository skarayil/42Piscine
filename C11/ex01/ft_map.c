/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_array;
	int	i;

	new_array = (int *)malloc(sizeof(int) * length);
	if (new_array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_array[i] = f(tab[i]);
		i++;
	}
	return (new_array);
}

int main (void)
{
	int	i;
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int length = 10;
	int *squared_tab;

	squared_tab = ft_map(tab, length, &ft_square);
	i = 0;
	while ( i < length)
	{
		printf( "%d\n", squared_tab[i]);
		i++;
	}
}