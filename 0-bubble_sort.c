#include "sort.h"

/**
 * swap - swap two pointers to integer
 *
 * @a: first int pointer
 * @b: second int pointer
 */
void swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/**
 * bubble_sort - sort an array of integers in ascending order
 * @array: the array to order and print
 * @size: size of array to order
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				swap(&array[j - 1], &array[j]);
				print_array(array, size);
			}
		}
	}
}
