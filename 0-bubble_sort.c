#include "sort.h"

/**
 * swap_int - swap value of an array
 * @array: array of integer
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: void
 */
void swap_int(int *array, size_t a, size_t b)
{
	int swapp;

	swapp = array[a];
	array[a] = array[b];
	array[b] = swapp;

}

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
	size_t i = 0;
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
				swap_int(array, i, i + 1);
				uwu = 1;
				print_array(array, size);
			}
		}
	}
}
