#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: first pointer to array
 * @size: length of array
 * @value: value to be searched
 * Return: index of value, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (array[low] <= value && array[high] >= value && high >= low)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

	    if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos + 1;
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}


