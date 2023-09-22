#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		/* Initialize a flag to check if any swaps were made in this pass */
		for (j = 0; j < size - i - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
		/* Swap array[j] and array[j + 1] */
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			swapped = 1;
			/* Set the flag to indicate a swap was made */
			print_array(array, size);
			/* Print the array after each swap */
		}
	}
	/* If no swaps were made in this pass, the array is already sorted */
	if (swapped == 0)
		break;
	}
}
