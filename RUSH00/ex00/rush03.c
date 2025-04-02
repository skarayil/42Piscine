/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_controller(int row, int col, int width, int height)
{
	if ((row == 0 && col == 0) || (row == height - 1 && col == 0))
		ft_putchar('A');
	else if ((row == 0 && col == width - 1)
		|| (row == height - 1 && col == width - 1))
	{
		if (width != 1)
			ft_putchar('C');
	}
	else if (row == 0 || row == height - 1)
	{
		if (col != 0 && col != width - 1)
			ft_putchar('B');
	}
	else if (col == 0 || col == width - 1)
	{
		if (row != 0 && row != height - 1)
			ft_putchar('B');
	}
	else
	{
		if (col != 0 && col != width - 1 && row != 0 && row != height - 1)
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x <= 0 || y <= 0)
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ft_controller(row, col, x, y);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
