/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	first;

	index = 0;
	first = 1;
	while (str[index] != '\0')
	{
		if (first && str[index] >= 'a' && str[index] <= 'z')
			str[index] += ('A' - 'a');
		else if (!first && str[index] >= 'A' && str[index] <= 'Z')
			str[index] += ('a' - 'A');
		first = 0;
		if (!((str[index] >= 'a' && str[index] <= 'z')
				|| (str[index] >= 'A' && str[index] <= 'Z')
				|| (str[index] >= '0' && str[index] <= '9')))
			first = 1;
		index++;
	}
	return (str);
}

/*
#include <stdio.h>
	
int	main(void)
{
	char	str[] = "OLA, tudo BEM? 42palavras QUARENTA-e-duas; cinquenta+E+UM";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strcapitalize(str));
}
*/
