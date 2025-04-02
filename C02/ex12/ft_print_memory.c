/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
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

void	print_hex(unsigned char c)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	ft_putchar(hex_digits[c / 16]);
	ft_putchar(hex_digits[c % 16]);
}

void	print_address(void *addr)
{
	unsigned long	address;
	char			address_str[16];
	int				i;

	address = (unsigned long)addr;
	i = 15;
	while (i >= 0)
	{
		address_str[i] = "0123456789abcdef"[address % 16];
		address /= 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		ft_putchar(address_str[i]);
		i++;
	}
}

void    print_char(unsigned char c)
{
    if (c >= 32 && c <= 126)
        ft_putchar(c);
    else
        ft_putchar('.');
}

void	print_memory_content(unsigned char *ptr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			print_hex(ptr[i]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
	i = 0;
    while (i < size && i < 16)
    {
        print_char(ptr[i]);
        i++;
    }

}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_address(ptr + i);
		ft_putchar(':');
		ft_putchar(' ');
		print_memory_content(ptr + i, size - i);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}

int main()
{
    char *str = "Bu bir deneme metnidir. Lütfen bir daha böyle zor bir soru gelmesin!";
    int dizi[] = {1,2,3,4,5};

    ft_print_memory(dizi, 2);
}