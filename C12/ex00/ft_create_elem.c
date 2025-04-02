/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:45:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/02/20 14:22:04 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_element;

	new_element = malloc(sizeof(t_list));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->data = data;
	new_element->next = NULL;
	return (new_element);
}


int main(void)
{
	int		a = 42;

	// creation of the list;
	t_list	*list;

	// creation of a element is the list
	list = ft_create_elem(&a);

	// Prints the elements of the list
	printf("Value of elem->data: %d\n", *(int *)list->data);
	printf("Value of elem->next: %p\n", (void *)list->next);

	// free of memory allocated
	free(list);
}