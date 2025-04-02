/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove(t_list **begin_list, t_list *elem,
	void (*free_fct)(void *))
{
	t_list	*onceki;
	t_list	*simdiki;

	if (*begin_list == NULL || elem == NULL)
		return ;
	free_fct(elem->data);
	if (*begin_list == elem)
	{
		*begin_list = elem->next;
	}
	else
	{
		onceki = *begin_list;
		simdiki = onceki->next;
		while (simdiki != elem)
		{
			onceki = simdiki;
			simdiki = simdiki->next;
		}
		onceki->next = simdiki->next;
	}
	free(elem);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
	int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*sonraki;

	temp = *begin_list;
	while (temp != NULL)
	{
		sonraki = temp->next;
		if (cmp(temp->data, data_ref) == 0)
			ft_list_remove(begin_list, temp, free_fct);
		temp = sonraki;
	}
}
