/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 11:21:02 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*
#include <stdio.h>

int	main(void)
{
	int n = 1;
	int *nbr = &n;

	printf("Before ft_ft: \n");
	printf("Variable 'nbr' points to adress %p that has the value %d stored\n", &n, n);
	printf("Pointer 'nbr' points to the same adress %p that has the value %d stored\n", nbr, *nbr);
	ft_ft(nbr);
	printf("\n");
	printf("After ft_ft: \n");
	printf("Pointer 'nbr' remains pointing to adress %p, but now that has the value %d stored\n", nbr, *nbr);
	printf("Now 'n' has the value %d stored\n", n);
}


#include <unistd.h>

int main()
{
	int var = 31;
	int *nbr = &var;
	ft_ft(nbr);
	char c1 = '0' + var / 10;
	char c2 = '0' + var % 10;
	write(1, &c1, 1);
    	write(1, &c2, 1);

	return (0);
}
*/
