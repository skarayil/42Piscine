/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb <= 1)
		return (0);
	index = 2;
	while (index <= nb / index)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

/*
#include <stdio.h>
	
int	main(void)
{
	printf("-7 is prime? %d\n", ft_is_prime(-7));
	printf("0 is prime? %d\n", ft_is_prime(0));
	printf("2 is prime? %d\n", ft_is_prime(2));
	printf("3 is prime? %d\n", ft_is_prime(3));
	printf("5 is prime? %d\n", ft_is_prime(5));
	printf("6 is prime? %d\n", ft_is_prime(6));
	printf("23 is prime? %d\n", ft_is_prime(23));
}
*/
