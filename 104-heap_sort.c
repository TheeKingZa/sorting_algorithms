#include "sort.h"

/**
 * sift_down - Heapify the array by moving the root down to its
 * correct position.
 * @array: The array to be heapified
 * @size: Size of the array
 * @root: The root of the subtree to be heapified
 * @max_size: Maximum size of the array (for printing purposes)
 */
void sift_down(int *array, size_t size, size_t root, size_t max_size)
{
size_t largest = root;
size_t left = 2 * root + 1;
size_t right = 2 * root + 2;
int temp;

if (left < size && array[left] > array[largest])
largest = left;

if (right < size && array[right] > array[largest])
largest = right;

if (largest != root)
{
/* Swap array[root] and array[largest] */
temp = array[root];
array[root] = array[largest];
array[largest] = temp;
print_array(array, max_size);

sift_down(array, size, largest, max_size);
}
}

/**
 * heap_sort - Sorts an array of integers in ascending order
 * using the Heap sort algorithm (sift-down).
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void heap_sort(int *array, size_t size)
{
int i, temp;

if (!array || size < 2)
return;

for (i = size / 2 - 1; i >= 0; i--)
sift_down(array, size, (size_t)i, size);

for (i = size - 1; i > 0; i--)
{
/* Swap array[0] and array[i] */
temp = array[0];
array[0] = array[i];
array[i] = temp;
print_array(array, size);

sift_down(array, (size_t)i, 0, size);
}
}
