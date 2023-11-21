#include "sort.h"
/**
 * partition - pivot sort
 * @array: the array
 * @l: lowest element
 * @h: highest element
 * @size: length of array
 * Return: void
 */
void partition(int *array, size_t l, size_t h, size_t size)
{
	int p = array[h];
	size_t i, j;

	if (l < h)
	{
		for (i = j = l; j < h; j++)
		{
			if (array[j] <= p)
			{
				swap(array, size, &array[j], &array[i]);
				i++;
			}
		}
		swap(array, size, &array[j], &array[i]);
		if (i > 0)
			partition(array, l, i - 1, size);
		partition(array, i + 1, h, size);
	}
}
/**
 * swap - sawp elements in array
 * @array: the array
 * @size: length of array
 * @x: array element
 * @y: array element
 * Return: void
 */
void swap(int *array, size_t size, int *x, int *y)
{
	int tmp;

	if (*x != *y)
	{
		tmp = *x;
		*x = *y;
		*y = tmp;
		print_array(array, size);
	}
}
/**
 * quick_sort - quick sort algorithm
 * @array: array
 * @size: length of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		partition(array, 0, size - 1, size);
}
