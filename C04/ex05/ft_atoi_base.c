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
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(const char *base)
{
	int	len;
	int	i;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '+' || base[len] == '-')
			return (0);
		i = 0;
		while (base[i] != '\0')
		{
			if (base[len] == base[i] && len != i)
				return (0);
			i++;
		}
		len++;
	}
	return (len > 1);
}

int	ft_to_decimal_base(const char *str, const char *base, int base_len)
{
	int	sayi;
	int	i;
	int	j;

	sayi = 0;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && base[j] != str[i])
			j++;
		if (base[j] == '\0')
			break ;
		sayi = sayi * base_len + j;
		i++;
	}
	return (sayi);
}

int	ft_atoi_base(const char *str, const char *base)
{
	int	isaret;
	int	base_len;

	if (!ft_check_base(base))
		return (0);
	base_len = ft_strlen(base);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	isaret = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isaret = -isaret;
		str++;
	}
	return (ft_to_decimal_base(str, base, base_len) * isaret);
}


int		main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--10", "0123456789"));
	printf("%d\n", ft_atoi_base(" --101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}