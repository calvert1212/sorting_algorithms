#include "sort.h"

/**
 * bubble_sort - Sort array with bubble sort algorithm
 * @array: Array
 * @size: Array size
 * Return: Void
 */

void bubble_sort(int *array, size_t size)
{
	int r;
	size_t j, k;

	if (array == NULL || size == 0)
		return;

	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				r = array[k];
				array[k] = array[k + 1];
				array[k + 1] = r;
				print_array(array, size);
			}
		}
	}
}
