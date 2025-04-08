/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	index = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (src[index] && dest_len + index < size - 1)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[10] = "42";
	char	src[10] = "ecole";
	int	size = 6;

	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
}
*/
