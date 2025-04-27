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
	int				index;

	address = (unsigned long)addr;
	index = 15;
	while (index >= 0)
	{
		address_str[index] = "0123456789abcdef"[address % 16];
		address /= 16;
		index--;
	}
	index = 0;
	while (index < 16)
	{
		ft_putchar(address_str[index]);
		index++;
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
	unsigned int	index;

	index = 0;
	while (index < 16)
	{
		if (index < size)
			print_hex(ptr[index]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (index % 2 == 1)
			ft_putchar(' ');
		index++;
	}
	index = 0;
    while (index < size && index < 16)
    {
        print_char(ptr[index]);
        index++;
    }

}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	index;

	if (size == 0)
		return (addr);
	ptr = (unsigned char *)addr;
	index = 0;
	while (index < size)
	{
		print_address(ptr + index);
		ft_putchar(':');
		ft_putchar(' ');
		print_memory_content(ptr + index, size - index);
		ft_putchar('\n');
		index += 16;
	}
	return (addr);
}

/*
int main()
{
    char *str = "Bu bir deneme metnidir. Lütfen bir daha böyle zor bir soru gelmesin!";
    int dizi[] = {1,2,3,4,5};

    ft_print_memory(dizi, 2);
}
*/
