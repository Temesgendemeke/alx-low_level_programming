#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to the first element of array
 * @size: length of the array
 * @value: target
 * Return: index of value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t i, j;
	size_t low = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i += m)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] < value)
		{
			low = i;
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, low + m);
			break;
		}

	}
	for (j = low; j < m; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
