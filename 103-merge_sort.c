#include "sort.h"
#include <stdlib.h>

/**
 * merge - Merges two subarrays of arr[].
 * @arr: The array to be merged
 * @left: Left subarray
 * @middle: Middle point
 * @right: Right subarray
 */
void merge(int *arr, int *left, int *middle, int *right)
{
int n1 = middle - left + 1;
int n2 = right - middle;
int *L = malloc(n1 * sizeof(int));
int *R = malloc(n2 * sizeof(int));
int i, j, k;

if (!L || !R)
{
/* Handle memory allocation error */
free(L);
free(R);
return;
}

for (i = 0; i < n1; i++)
L[i] = left[i];
for (j = 0; j < n2; j++)
R[j] = middle[j + 1];

i = j = 0;
k = 0;

while (i < n1 && j < n2)
{
if (L[i] <= R[j])
{
arr[k] = L[i];
i++;
}
else
{
arr[k] = R[j];
j++;
}
k++;
}

while (i < n1)
{
arr[k] = L[i];
i++;
k++;
}

while (j < n2)
{
arr[k] = R[j];
j++;
k++;
}

/* Free dynamically allocated memory */
free(L);
free(R);
}

/**
 * merge_sort_recursive - Recursive function for merge sort
 * @arr: The array to be sorted
 * @left: Left index
 * @right: Right index
 */
void merge_sort_recursive(int *arr, int left, int right)
{
if (left < right)
{
int middle = left + (right - left) / 2;

merge_sort_recursive(arr, left, middle);
merge_sort_recursive(arr, middle + 1, right);

merge(arr, arr + left, arr + middle, arr + right);
}
}

/**
 * merge_sort - Sorts an array of integers in ascending order
 * using the Merge sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void merge_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

merge_sort_recursive(array, 0, size - 1);
}
