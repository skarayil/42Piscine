/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	index = 1;
	result = 1;
	while (index <= nb)
	{
		result *= index;
		index++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Fatorial of -1 = %d\n", ft_iterative_factorial(-1));
	printf("Fatorial of 0 = %d\n", ft_iterative_factorial(0));
	printf("Fatorial of 1 = %d\n", ft_iterative_factorial(1));
	printf("Fatorial of 5 = %d\n", ft_iterative_factorial(5));
}
*/
