#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Cocktail Shaker sort algorithm.
 * @list: A pointer to a pointer to the head of the linked list
 */
void cocktail_sort_list(listint_t **list)
{
int swapped = 1;
listint_t *current;
listint_t *tail = NULL;

if (!list || !(*list) || !((*list)->next))
return;

while (swapped)
{
swapped = 0;
current = *list;

while (current->next != tail)
{
if (current->n > current->next->n)
{
/* Swap current and current->next nodes */
swap_nodes(list, current, current->next);
swapped = 1;
print_list(*list);
}
else
current = current->next;
}

if (!swapped)
break;

swapped = 0;
tail = current;

while (current->prev != NULL)
{
if (current->n < current->prev->n)
{
/* Swap current and current->prev nodes */
swap_nodes(list, current->prev, current);
swapped = 1;
print_list(*list);
}
else
current = current->prev;
}
}
}
