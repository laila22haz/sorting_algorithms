#include "sort.h"

/**
 * swap - function that swaps two integers
 * @a: the first argument
 * @b: the second argument
 * Return: void
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: array that should be sorted
 * @size: the size of the array
 * Return: return void
*/
void shell_sort(int *array, size_t size)
{
	size_t gap;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < size; gap = gap * 3 + 1)
		;

	for (gap /= 3; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap && array[j - gap] > array[j]; j -= gap)
			{
				swap(&array[j], &array[j - gap]);
			}
		}
		print_array(array, size);
	}
}
