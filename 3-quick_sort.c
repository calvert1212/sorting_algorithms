#include "sort.h"
/**
 * quick_sort - uses Lomuto method to quick sort integer array
 * @array: pointer to the array
 * @s: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t s)
{
	if (!array || s < 2)
		return;
	helper1(array, 0, (s - 1), s);
}

/**
 * helper1 - recursive helper function
 * @array: pointer to the array
 * @l: 0 index
 * @r: last index
 * @s: size of the array
 * Return: void
 */
void helper1(int *array, int l, int r, size_t s)
{
	int i;

	if (l < r)
	{
		i = helper2(array, l, r, s);
		helper1(array, l, i - 1, s);
		helper1(array, i + 1, r, s);
	}
}

/**
 * helper2 - helper function
 * @array: array pointer
 * @l: node 0 index
 * @r: final index
 * @size: size of the array
 * Return: index
 */
int helper2(int *array, int l, int r, size_t s)
{
	int pivot = array[r];
	int i = l;
	int j, temp = 0;

	for (j = l; j < r; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (temp != array[i])
				print_array(array, s);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[r];
	array[r] = temp;
	if (temp != array[i])
		print_array(array, s);
	return (i);
}
