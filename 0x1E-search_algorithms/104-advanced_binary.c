#include "search_algos.h"



int advanced_binary(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    

    if (array == NULL)
          return -1;

    while (low <= high)
    {
        size_t mid = (high + low) / 2;
        size_t j;

        printf("Searching in array: ");
        for (j = low; j <= high; j++)
        {
            printf("%d", array[j]);
            if (j + 1 < high)
            {
                printf(", ");
            }
            else if (j + 1 == high)
            {
                printf("\n");
            }
        }

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            low = mid + 1;
        }
        else if (array[mid] > value)
        {
            high = mid - 1;
        }

    }
    

    return (-1);
}