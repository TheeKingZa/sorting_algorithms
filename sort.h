#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* data/structure_doubly-linked_list */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
/* listint_t *create_listint(const int *array, size_t size); */
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int lomuto_partition(int *array, int low, int high, size_t size);
void quicksort(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void shift_down(int *array, size_t size, size_t root, size_t max_size);
void heap_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge(int *arr, int *left, int * middle, int *right);
void merge(int *arr, int *left, int *middle, int *right);
void merge_sort_recursive(int *arr, int left, int right);
void merge_sort(int *array, size_t size);
int get_max(int *array, size_t size);
void counting_sort1(int *array, size_t size, int exp);
void radix_sort(int *array, size_t size);
void bitonic_compare(int *array, size_t size, int dir);
void bitonic_merge(int *array, size_t size, int dir);
void bitonic_sort_recursive(int *array, size_t size, int dir);
void bitonic_sort(int *array, size_t size);




#endif /* sort.h */
