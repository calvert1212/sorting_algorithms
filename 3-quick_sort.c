#include "sort.h"
/**
 * quick_sort - sorts array using quickSort
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	int ls = 0;
	int *p = (array + size - 1), *j = array, *i = (j - 1);
	if (array == NULL || size < 2)
		return;

	for (j = array; j <= (p - 1); j++)
	{
		if (*j <= *p)
		{
			i++;
			ls++;
			swap(i, j);
			print_array(array, size);
		}
	}
	swap(i + 1, p);
	print_array(array, size);
	if (ls > 1)
		quick_sort(array, ls);
	if (size - (ls + 1) > 1)
		quick_sort(i + 2, size - (ls + 1));
}

/**
 * numSwap - Swaps two numbers helper
 * @a: First number
 * @b: Second number
 * Return: void
 */
void swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
