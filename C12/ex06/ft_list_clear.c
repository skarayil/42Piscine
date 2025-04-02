/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list, void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*onceki;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	temp = *begin_list;
	while (temp != NULL)
	{
		onceki = (temp->next);
		free_fct(temp->data);
		free(temp);
		temp = onceki;
	}
	*begin_list = NULL;
}
