#include "search_algos.h"
/**
 * binary_search - binary search algorthim function
 * @array: pointer to the first element
 * @size: length of array
 * @value: value to be search
 * Return: index of value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		size_t i;
		size_t mid = (high + low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
