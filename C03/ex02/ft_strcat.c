/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	index;

	dest_len = ft_strlen(dest);
	index = 0;
	while (src[index])
	{
		dest[index + dest_len] = src[index];
		index++;
	}
	dest[index + dest_len] = '\0';
	return (dest);
}

/*
#include <stdio.h>
	
int	main(void)
{
	char	dest[10] = "42";
	char	src[10] = "ecole";

	ft_strcat(dest, src);
	printf("String: %s\n", dest);
}
*/
