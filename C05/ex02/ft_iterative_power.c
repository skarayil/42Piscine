/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	index;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	index = 0;
	result = 1;
	while (index < power)
	{
		result *= nb;
		index++;
	}
	return (result);
}

/*
#include <stdio.h>
	
int	main(void)
{
	printf("Power of 2 ^ -1 = %d\n", ft_iterative_power(2, -1));
	printf("Power of 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
	printf("Power of 3 ^ 1 = %d\n", ft_iterative_power(3, 1));
	printf("Power of -3 ^ 3 = %d\n", ft_iterative_power(-3, 3));
}
*/
