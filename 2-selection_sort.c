#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * with  Selection sort algorithm
 * @array: pointer to an array of integer
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t swap;

	/* if the array is NULL or size < 2, array already sort */
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{

		size_t index = i;

		/* Find the minimum element of array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}

		/* swap minimum element with the first element */
		if (index != i)
		{
			swap = array[i];
			array[i] = array[index];
			array[index] = swap;

			print_array(array, size);
		}
	}
}

