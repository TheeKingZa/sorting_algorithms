#include "sort.h"

/**
 * counting_sort - Sorts an array of integers in ascending order
 * using the Counting sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void counting_sort(int *array, size_t size)
{
int *output = NULL;
int max = 0;
size_t i;

if (!array || size < 2)
return;

for (i = 0; i < size; i++)
{
if (array[i] > max)
max = array[i];
}

output = malloc(sizeof(int) * (max + 1));
if (!output)
return;

for (i = 0; i <= (size_t)max; i++)
output[i] = 0;

for (i = 0; i < size; i++)
output[array[i]]++;

for (i = 1; i <= (size_t)max; i++)
output[i] += output[i - 1];

print_array(output, max + 1);

for (i = 0; i < size; i++)
{
array[output[array[i]] - 1] = array[i];
output[array[i]]--;
}

free(output);
}
