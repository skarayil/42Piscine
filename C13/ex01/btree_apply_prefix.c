/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:13:29 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 12:13:30 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>
/* 
// Prints the content of a node
void	ft_print(void *item)
{
	printf("%s\n", (char *)item);
}  */

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
/* 
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

	// Applies the prefix order to the binary tree
	btree_apply_prefix(&level1, ft_print);
} */
