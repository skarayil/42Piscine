/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*simdiki;
	t_list	*sonraki;
	t_list	*onceki;

	if (*begin_list == NULL)
		return ;
	onceki = *begin_list;
	simdiki = onceki->next;
	if (simdiki == NULL)
		return ;
	sonraki = simdiki->next;
	while (1)
	{
		simdiki->next = onceki;
		if (sonraki == NULL)
			break ;
		onceki = simdiki;
		simdiki = sonraki;
		sonraki = sonraki->next;
	}
	(*begin_list)->next = NULL;
	*begin_list = simdiki;
}
