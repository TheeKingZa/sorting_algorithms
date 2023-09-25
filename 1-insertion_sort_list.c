#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: A pointer to a pointer to the head of the linked list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *prev, *temp;

if (!list || !*list || !(*list)->next)
return;

current = (*list)->next;

while (current)
{
temp = current;
prev = current->prev;

while (prev && prev->n > temp->n)
{
/* Swap prev and temp nodes */
if (prev->prev)
prev->prev->next = temp;
if (temp->next)
temp->next->prev = prev;

prev->next = temp->next;
temp->prev = prev->prev;
prev->prev = temp;
temp->next = prev;

if (!temp->prev)
*list = temp;

print_list(*list);
prev = temp->prev;
}
current = current->next;
}
}
