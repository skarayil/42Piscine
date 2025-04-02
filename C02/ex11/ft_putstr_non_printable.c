/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			hex_digits[2];

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c < 32 || c == 127)
		{
			ft_putchar('\\');
			hex_digits[0] = "0123456789abcdef"[c / 16];
			hex_digits[1] = "0123456789abcdef"[c % 16];
			ft_putchar(hex_digits[0]);
			ft_putchar(hex_digits[1]);
		}
		else
		{
			ft_putchar(c);
		}
		i++;
	}
}


int	main(void)
{
	char *str = "Ola\nesta bem?";
	ft_putstr_non_printable(str);
}