#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm
 * @array: array to sort
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0, swapped = 0;
	size_t x = 0, y = 0;

	if (array == NULL || size == 0)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
				swapped = 1;
			}

		}
		if (swapped == 0)
			break;
	}
}
