#include "search_algos.h"

/**
 * linear_search - linear search function
 * @array: array which will be searched in
 * @size: size of the array
 * @value: element to find
 * Return: index of element  if found, -1 otherwise
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d] \n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
