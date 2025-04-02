/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:04:37 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 12:04:39 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void    ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;

	// the two loops are used to check all the parameters with each other
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			// If there is a negative difference between the tab
			// the strings are exchanged
			if (ft_strcmp(tab[i], tab[j]) < 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int  main(int ac, char **av)
{
    int i = 0;

    ft_sort_string_tab(av);
    while (i < ac)
    {
        printf("%s\n", av[i]);
        i++;
    }
} 
