#include "sort.h"

/**
 * bubble_sort -  sorts array of integers in ascending order
 *  using the Bubble sort algorithm
 *  @array: array of integer
 *  @size: size of array
 *
 *  Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, swapp = 0;
	int uwu = 1;

	if (array == NULL || size < 2)
		return;

	while (uwu == 1)
	{
		uwu = 0;

		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swapp;
				uwu = 1;
				print_array(array, size);
			}
		}
	}
}
