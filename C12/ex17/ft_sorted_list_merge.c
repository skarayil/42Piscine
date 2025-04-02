/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skarayil <skarayil@student.42kocaeli.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:09:12 by skarayil          #+#    #+#             */
/*   Updated: 2025/04/02 12:09:21 by skarayil         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */



#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
/* 
int	ft_cmp(void *data1, void *data2)
{
	return (*(int *)data1 - *(int *)data2);
} */

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	void	*temp;


	// check if the arguments are valid
	if (!begin_list || !cmp)
		return ;

	// Check if the list is empty
	if (!(*begin_list))
		return ;
	current = *begin_list;
	while (current->next)
	{	
		// Checks if the current element is greater than the next
		if ((*cmp)(current->data, current->next->data) > 0)
		{
			// Make the swap of values
			temp = current->data;
			current->data = current->next->data;
			current->next->data = temp;

			// The order restarts from the beginning of the list
			current = *begin_list;
		}
		else
			current = current->next;
	}
}

// Merge the two lists
void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *current;
	t_list	*prev;

	// 
	current = (*begin_list1);
	while(current != NULL)
	{
		prev = current;
		current = current->next;
	}

	// merge 'list_2' to the end of 'list_1'
	prev->next = begin_list2;
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp) ())
{
	// check if the arguments are valid
	if (!begin_list1 || !begin_list2 || !cmp)
		return ;

	// Merge the two lists
	ft_list_merge(begin_list1, begin_list2);

	// Sort the list in crescent order
	ft_list_sort(begin_list1, cmp);
}
/* 
// Creates a t_list element that is a struct
t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

    // do memory allocation and check
	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);

    // assigns values to the struct variables
	elem->data = data;
	elem->next = NULL;

    // Returns the created element
	return (elem);
}

// Prints the values contained in each element of the chained list
void	print_list(t_list *list)
{
	t_list *current = list;

	while (current)
	{
		printf("Value: %d\n", *(int *)current->data);
		current = current->next;
	}
}

int main(void)
{
	// declaration of the lists
	t_list	*list_1 = (t_list *)malloc(sizeof(t_list));
	t_list	*list_2 = (t_list *)malloc(sizeof(t_list));

	// declaration of values
	int a = 15;
	int b = -3;
	int c = 9;
	int d = -178;
	int e = 986;
	int f = 0;

	// declaration and assign of pointers
	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;
	void *p4 = &d;
	void *p5 = &e;
	void *p6 = &f;

	// Creation of List_1 Elements
	list_1 = ft_create_elem(p1);
	list_1->next = ft_create_elem(p2);
	list_1->next->next = ft_create_elem(p3);

	// Creation of List_2 Elements
	list_2 = ft_create_elem(p4);
	list_2->next = ft_create_elem(p5);
	list_2->next->next = ft_create_elem(p6);

	printf("List 1 before:\n");
	print_list(list_1);

	printf("\nList 2 before:\n");
	print_list(list_2);

	// Insert a new value in a sort list in crescent order
	ft_sorted_list_merge(&list_1, list_2, &ft_cmp);

	printf("\nList 1 after:\n");
	print_list(list_1);

	// free of memory allocated
	free(list_1);
	free(list_2);
} */
