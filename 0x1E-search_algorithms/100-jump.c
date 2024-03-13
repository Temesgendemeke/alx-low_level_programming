#include "search_algos.h"
#include <math.h>
/**
 *
 *
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = sqrt(size);
	size_t i,j;
	
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i+=m)
	{
		printf("Value checked array[%ld] = [%d]\n",i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
		else if (array[i] >= value || array[i + m] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",i, i+m);
			break;
		}
		
	}
	for (j = i; j < m; j++)
	{
		printf("Value checked array[%ld] = [%d]\n",j,array[j]);
		if (array[j] == value)
			return j;
	}
	return (-1);
}
