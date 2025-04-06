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

void	print_combination(int *arr, int nbr, int last)
{
	char	c;
	int		index;

	index = 0;
	while (index < nbr)
	{
		c = arr[index] + '0';
		write(1, &c, 1);
		index++;
	}
	if (!last)
	{
		write(1, ", ", 2);
	}
}

int	last_combination(int *arr, int nbr)
{
	int	index;
	int	last;

	last = 1;
	index = 0;
	while (index < nbr)
	{
		if (arr[i] != 10 - nbr + index)
		{
			last = 0;
			break ;
		}
		index++;
	}
	return (last);
}

void	print_combination_recursive(int nbr, int *arr, int index, int start)
{
	int	j;

	if (index == nbr)
	{
		print_combination(arr, nbr, last_combination(arr, nbr));
		return ;
	}
	j = start;
	while (j <= 9)
	{
		arr[index] = j;
		print_combination_recursive(nbr, arr, index + 1, j + 1);
		j++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
	{
		print_combination_recursive(n, arr, 0, 0);
	}
}

/*
int	main(void)
{
	ft_print_combn(2);
}
*/
