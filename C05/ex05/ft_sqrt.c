/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb <= 0)
		return (0);
	index = 1;
	while (index <= nb / index)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Square Root of 0: %d\n", ft_sqrt(0));
	printf("Square Root of -2: %d\n", ft_sqrt(-2));
	printf("Square Root of 4: %d\n", ft_sqrt(4));
	printf("Square Root of 10: %d\n", ft_sqrt(10));
	printf("Square Root of 25: %d\n", ft_sqrt(25));
}
*/
