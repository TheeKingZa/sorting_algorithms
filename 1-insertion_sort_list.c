#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: A pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *next;
	if (list == NULL || *list == NULL)
		return;

/* Initialize 'current, prev and next' to the hnode */

	current = (*list)->next;

	while (current != NULL)
	{
		prev = current->prev;
		next = current->next;

	while (prev != NULL && prev->n > current->n)
	{
/* Perform the swap of 'current' and 'prev' */
		prev->next = next;
		if (next != NULL)
			next->prev = prev;
		current->prev = prev->prev;
		current->next = prev;
		if (prev->prev != NULL)
			prev->prev->next = current;
		prev->prev = current;

		if (prev == *list)
/* If 'prev' was the head of the list, update the head */
		*list = current;

		print_list(*list);
/* Print the list after each swap */
		prev = current->prev;
/* Move 'prev' backwards to check previous elements */
	}
	current = next;
/* Move 'current' forward to check the next element*/
	}
}
