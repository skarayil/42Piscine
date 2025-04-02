/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*dizi;

	if (min >= max)
		return (NULL);
	len = max - min;
	dizi = (int *)malloc(sizeof(int) * len);
	if (dizi == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	return (dizi);
}


int	main(void)
{
	int	min = -10;
	int	max = 10;
	int	i = 0;
	int	*range = ft_range(min, max);
	int	size = max - min;

	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	// In the end the allocated memory needs to be free
	// When we free 'range', we ended up releasing 'array', as it's a pointer
	free(range);
}