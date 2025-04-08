/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	return (index);
}

int	ft_check_base(const char *base)
{
	int	len;
	int	index;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		index = 0;
		while (base[index] != '\0')
		{
			if (base[len] == base[index] && len != index)
				return (0);
			index++;
		}
		len++;
	}
	return (len > 1);
}

int	ft_to_decimal_base(const char *str, const char *base, int base_len)
{
	int	nbr;
	int	i;
	int	j;

	nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && base[j] != str[i])
			j++;
		if (base[j] == '\0')
			break ;
		nbr = nbr * base_len + j;
		i++;
	}
	return (nbr);
}

int	ft_atoi_base(const char *str, const char *base)
{
	int	sign;
	int	base_len;

	if (!ft_check_base(base))
		return (0);
	base_len = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	return (ft_to_decimal_base(str, base, base_len) * sign);
}

/*
#include <stdio.h>
	
int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--10", "0123456789"));
	printf("%d\n", ft_atoi_base(" --101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
*/
