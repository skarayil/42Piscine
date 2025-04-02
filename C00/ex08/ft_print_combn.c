/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(int *arr, int n, int is_last)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (!is_last)
	{
		write(1, ", ", 2);
	}
}

int	is_last_combination(int *arr, int n)
{
	int	i;
	int	last;

	last = 1;
	i = 0;
	while (i < n)
	{
		if (arr[i] != 10 - n + i)
		{
			last = 0;
			break ;
		}
		i++;
	}
	return (last);
}

void	ft_print_combination_recursive(int n, int *arr, int index, int start)
{
	int	i;

	if (index == n)
	{
		print_combination(arr, n, is_last_combination(arr, n));
		return ;
	}
	i = start;
	while (i <= 9)
	{
		arr[index] = i;
		ft_print_combination_recursive(n, arr, index + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
	{
		ft_print_combination_recursive(n, arr, 0, 0);
	}
}


int	main(void)
{
	ft_print_combn(2);
}