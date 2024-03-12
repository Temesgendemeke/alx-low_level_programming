#include "search_algos.h"
/**
 * linear_search - linear search algorthim functions
 * @array: pointer to the first element of array
 * @size: length of the array
 * @value: element to be searched
 * Return: the index of a array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
