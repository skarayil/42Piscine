/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int	main(void)
{
	int	v1 = 15;
	int	v2 = 35;
	int	*a = &v1;
	int	*b = &v2;
	
	printf("Before ft_swap: \n");
	printf("Pointer 'a' points to adress %p that has the value %d stored\n", a, *a);
	printf("Pointer 'b' points to adress %p that has the value %d stored\n", b, *b);
	ft_swap(a, b);
	printf("\n");
	printf("After ft_swap: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", a, *a);
	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", b, *b);
}