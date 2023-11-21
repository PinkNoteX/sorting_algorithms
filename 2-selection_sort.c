#include "sort.h"
/**
 * selection_sort - sort using selection sort algorithm
 * @array: the array
 * @size: length of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t tmp, x1, x2, min;

	if (array == NULL || size == 0)
		return;
	for (x1 = 0; x1 < size - 1; x1++)
	{
		min = x1;
		for (x2 = x1 + 1; x2 < size; x2++)
		{
			if (array[min] > array[x2])
				min = x2;
		}
		if (min != x1)
		{
			tmp = array[min];
			array[min] = array[x1];
			array[x1] = tmp;
			print_array(array, size);
		}
	}
}
