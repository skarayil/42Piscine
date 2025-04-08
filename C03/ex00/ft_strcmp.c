/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{	
		*s1++;
		*s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>
 
int	main(void)
{
	char	*s1 = "42ecole";
	char	*s2 = "42ecole";

	// This line calls the original function to verify that the output is the same
	printf("Or: %d\n", strcmp(s1, s2));
	printf("My: %d\n", ft_strcmp(s1, s2));
}
*/
