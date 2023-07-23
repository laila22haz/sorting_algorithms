#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * @array: array that should be sorted
 * @size: the size of the array
 * Return: return void
*/
void selection_sort(int *array, size_t size)
{
	int min, temp;
	size_t i, j;
	int flag;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				flag = 1;
			}
		}
	temp = array[min];
	array[min] = array[i];
	array[i] = temp;
	if (flag)
		print_array(array, size);
	}
}
