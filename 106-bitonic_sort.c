#include "sort.h"
#include <stdio.h>

/**
 * bitonic_compare - Compare two elements and swap if needed
 * @array: The array to be sorted
 * @size: The size of the array
 * @dir: The sorting direction (1 for ascending, 0 for descending)
 */
void bitonic_compare(int *array, size_t size, int dir)
{
size_t dist = size / 2;
size_t i;
int temp;

for (i = 0; i < dist; i++)
{
if ((array[i] > array[i + dist]) == dir)
{
temp = array[i];
array[i] = array[i + dist];
array[i + dist] = temp;
}
}
}

/**
 * bitonic_merge - Recursively merge two halves of the array
 * @array: The array to be sorted
 * @size: The size of the array
 * @dir: The sorting direction (1 for ascending, 0 for descending)
 */
void bitonic_merge(int *array, size_t size, int dir)
{
if (size > 1)
{
size_t mid = size / 2;

printf("Merging [%s]: ", dir ? "UP" : "DOWN");
print_array(array, size);

bitonic_compare(array, size, dir);
bitonic_merge(array, mid, dir);
bitonic_merge(array + mid, mid, dir);
}
}

/**
 * bitonic_sort_recursive - Recursively apply the Bitonic sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 * @dir: The sorting direction (1 for ascending, 0 for descending)
 */
void bitonic_sort_recursive(int *array, size_t size, int dir)
{
if (size > 1)
{
size_t mid = size / 2;

printf("Splitting [%s]: ", dir ? "UP" : "DOWN");
print_array(array, size);

bitonic_sort_recursive(array, mid, 1);
bitonic_sort_recursive(array + mid, mid, 0);

bitonic_merge(array, size, dir);
}
}

/**
 * bitonic_sort - Sort an array of integers in ascending order
 * using the Bitonic sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bitonic_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

bitonic_sort_recursive(array, size, 1);
}
