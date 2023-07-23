#include "sort.h"

/**
 * swap - function that swaping
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
 * partition - Partition the array as the pivot
 * @array: the first argument
 * @start: the second argument
 * @end: the third argument
 * @size: size of array
 * Return: return void
*/
int partition(int *array, int start, int end, size_t size)
{
	int pivot;
	int i, j;

	pivot = array[end];
	i = start - 1;

	for (j = start; j < end; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != end)
	{
		swap(&array[i + 1], &array[end]);
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * my_quick - function that implements QuickSort
 * @array: the first argument
 * @start: the second argument
 * @end: the third argument
 * @size: size of the array
 * Return: return void
*/
void my_quick(int *array, int start, int end, size_t size)
{
	int part;

	if (start < end)
	{
		part = partition(array, start, end, size);
		my_quick(array, start, part - 1, size);
		my_quick(array, part + 1, end, size);
	}
}
/**
 * quick_sort - function that sorts an array of integers
 * @array: array that should be sorted
 * @size: the size of the array
 * Return: return void
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;

	my_quick(array, 0, size - 1, size);
}
