#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of array
 * @size: length of array
 * @value: integer to be searched
 * Return: index of integer in array, -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t high = size - 1;
	size_t low;


	if (array[0] == value)
		return (0);
	else if (array == NULL || size == 0)
		return (-1);
	while (i <= high && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = i > size - 1 ? size - 1 : i;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	while (low <= high)
	{
		size_t mid = (low + high) / 2;
		size_t j;

		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j  < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
	}
	return (-1);
}
