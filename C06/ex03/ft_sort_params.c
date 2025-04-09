/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;
	int	diff;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	if (str1[i] == str2[i])
		diff = 0;
	else if (str1[i] - str2[i] < 0)
		diff = -1;
	else
		diff = 1;
	return (diff);
}

#include <unistd.h>

void	ft_print_params(int argc, char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		temp = argv[i];
		while (*temp)
			write(1, temp++, 1);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(int argc, char *argv[])
{
	int		i;
	int		change;
	char	*temp;

	change = 1;
	while (change)
	{
		change = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				change = 1;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 2)
	{
		ft_sort_params(argc, argv);
	}
	ft_print_params(argv, argc);
	return (0);
}
