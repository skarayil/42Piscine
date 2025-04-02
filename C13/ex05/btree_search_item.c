/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:15:55 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 12:16:01 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
/* 
int	ft_strcmp(void	*s1, void *s2)
{
		return ((char *)s1 - (char *)s2);
} */

// Looking for a specific item in the binary tree
void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void	*elem;

	if (root)
	{
		// Search for the data_ref on the left side of the tree recursively
		elem = btree_search_item(root->left, data_ref, cmpf);

		// If it has returned any value, this value is returned
		if (elem)
			return (elem);

		// compares the current node item with data-ref
		// The infix form compares the item in the second time
		if (!cmpf(root->item, data_ref))
			return (root->item);

		// Search for the data_ref on the right side of the tree recursively
		elem = btree_search_item(root->right, data_ref, cmpf);

		// If it has returned any value, this value is returned
		if (elem)
			return (elem);
	}
	// If it has no correspondence, the return is 0
	return (0);
}
/* 
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

// Prints the content of a node
void	ft_print(void *item)
{
	printf("%s ", (char *)item);
}

// Prints the binary tree from the current node
// in sequence the left subtree, and finally the right subtree
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	// Prints the node in the first time that is find
	applyf(root->item);

	// check if on the left is not empty
	if (root->left)

		// Calls the function recursively by passing the address contained on the left
		btree_apply_prefix(root->left, applyf);

	// check if on the left is not empty
	if (root->right)

		// Calls the function recursively by passing the address contained on the left
		btree_apply_prefix(root->right, applyf);
}

int main(void)
{
	// Creates a binary tree with 3 levels of depth
	// Each node contains a pointer to left child and to right child
	t_btree	level3_left_l = {NULL, NULL, "3"};
	t_btree	level3_left_r = {NULL, NULL, "4"};
	t_btree	level3_right_l = {NULL, NULL, "6"};
	t_btree	level3_right_r = {NULL, NULL, "7"};
	t_btree level2_left = {&level3_left_l, &level3_left_r, "2"};
	t_btree	level2_right = {&level3_right_l, &level3_right_r, "5"};
	t_btree	level1 = {&level2_left, &level2_right, "1"};

	// The tree receives the address The level1
	t_btree	*tree = &level1;

	printf("Binary tree before:\n");
	btree_apply_prefix(&level1, ft_print);

	// Search for an item on the list
	printf("\nSearch: ");
	ft_print(btree_search_item(tree, "4", &ft_strcmp));
} */
