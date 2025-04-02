/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	temp;
	int		base_len;

	if (!ft_check_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	temp = nbr;
	if (temp < 0)
	{
		write(1, "-", 1);
		temp = -temp;
	}
	if (temp >= base_len)
	{
		ft_putnbr_base(temp / base_len, base);
		write(1, &base[temp % base_len], 1);
	}
	else
		write(1, &base[temp], 1);
}


int	main(void)
{
	int	n = 42;
	char	*hex = "0123456789abcdef";
	char	*oct = "012345678";
	char	*dec = "0123456789";
	char	*bin = "01";

	write(1, "decimal to decimal: ", 20);
	ft_putnbr_base(n, dec);
	write(1, "\ndecimal to binary: ", 20);
	ft_putnbr_base(n, bin);
	write(1, "\ndecimal to octal: ", 20);
	ft_putnbr_base(n, oct);
	write(1, "\ndecimal to hexadecimal: ", 26);
	ft_putnbr_base(n, hex);
	write(1, "\n", 1);

}