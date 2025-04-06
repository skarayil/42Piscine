/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	size = size - 1;
	while (index < size)
	{
		temp = tab[index];
		tab[index] = tab[size];
		tab[size] = temp;
		index++;
		size--;
	}
}

/*
#include <stdio.h>
	
int	main(void)
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = 10;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Array before: \n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	printf("\nArray after: \n");
	ft_rev_int_tab(tab, size);
	while (j < size)
        {
		printf("%d ", tab[j]);
		j++;
	}
}
*/
