/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:48:11 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 11:48:16 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// function that prints the founded solution
void	ft_print_solution(int *chessboard)
{
	int	index;

	index = 0;
	while (index < 10)
		ft_putchar(chessboard[index++] + '0');
	ft_putchar('\n');
}

// Check if two queens can attack each other in a given position
int	attack_possibility(int *chessboard, int pos)
{
	int	index;

	index = 0;
	while (index < pos)
	{
		if (chessboard[index] == chessboard[pos] && index != pos)
			return (1);
		if (index != pos)
		{
			if (chessboard[index] == chessboard[pos] - (pos - index)
				|| chessboard[index] == chessboard[pos] + (pos - index))
				return (1);
		}
		index++;
	}
	return (0);
}

void	ft_ten_queens_puzzle_recursive(int chessboard[], int pos, int *solutions)
{
	int	index;

	index = 0;
	if (pos == 10)
	{
		ft_print_solution(chessboard);
		(*solutions)++; 
	}
	else
	{
		while (index <= 9)
		{
			chessboard[pos] = index;
			if (!attack_possibility(chessboard, pos))
				ft_ten_queens_puzzle_recursive(chessboard, pos + 1, solutions);
			index++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	chessboard[10];
	int	solutions;

	solutions = 0;
	ft_ten_queens_puzzle_recursive(chessboard, 0, &solutions);
	return (solutions);
}

/*
#include <stdio.h>

int main()
{
    printf("Solutions founded: %d\n", ft_ten_queens_puzzle());
} 
*/
