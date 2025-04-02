/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:13:01 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 12:13:10 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

// Creates a t_btree element that is a struct
t_btree	*btree_create_node(void	*item)
{
	t_btree	*node;

    // do memory allocation and check
	node = (t_btree *)malloc(sizeof(t_btree));
	if (!node)
		return (NULL);
	
    // assigns values to the struct variables
	node->item = item;
	node->left = NULL;
	node->right = NULL;

    // Returns the created element
	return (node);
}
/* 
int main(void)
{
	int		a = 42;

	// creation of the list;
	t_btree	*list;

	// creation of a element is the list
	list = btree_create_node(&a);

	// Prints the elements of the list
	printf("Value of node->item: %d\n", *(int *)list->item);
	printf("Value of node->left: %p\n", (void *)list->left);
	printf("Value of node->right: %p\n", (void *)list->right);

	// free of memory allocated
	free(list);
} */
