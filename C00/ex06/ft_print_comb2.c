/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	while (left <= 99)
	{
		right = left + 1;
		while (left <= 99)
		{
			ft_putchar((left / 10) + '0');
			ft_putchar((left % 10) + '0');
			write(1, " ", 1);
			ft_putchar((right / 10) + '0');
			ft_putchar((right % 10) + '0');
			if (left < 98 || right < 99)
				write(1, ", ", 2);
			right++;
		}
		left++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
} 
*/
