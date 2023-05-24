#include "search_algos.h"

/**
 * linear search - searches a value in an array of intergers
 * using linear search
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: if the value is not present or the array is NULL, -1
 * otherwise, the first indexwhere the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
