/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	index;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	index = 0;
	while (src[index] != '\0' && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "letters";
	char	dest[11];
	int	n = 6;

	printf("src: %s\nlenght returned: %d\ndest: %s\n", src, ft_strlcpy(dest, src, n), dest);
}
*/
