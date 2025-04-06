/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
	
int	main(void)
{
	int a = 45;
	int b = 5;
	int	v1 = 0;
	int	v2 = 0;
	int	*div = &v1;
	int	*mod = &v2;

	printf("Before ft_div_mod: \n");
	printf("Pointer 'div' points to adress %p that has the value %d stored\n", div, *div);
	printf("Pointer 'mod' points to adress %p that has the value %d stored\n", mod, *mod);
	ft_div_mod(a, b, div, mod);
	printf("\n");
	printf("After ft_div_mod: \n");
	printf("Pointer 'div' remains pointing to adress %p, but now that has the value %d stored\n", div, *div);
	printf("Pointer 'mod' remains pointing to adress %p, but now that has the value %d stored\n", mod, *mod);
}
*/
