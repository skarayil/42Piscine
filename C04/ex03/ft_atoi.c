/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(char *str)
{
	int	isaret;
	int	nb;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	isaret = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isaret = -isaret;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb * isaret);
}


int	main(void)
{
	char *n = " ---+--+1234ab567";

	printf("My: %d\n", ft_atoi(n));
}