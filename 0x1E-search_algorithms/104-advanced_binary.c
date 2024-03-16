#include "search_algos.h"
/*
 * adavanced_binary - searches for a value in a sorted array of integer
 * @array: pointer to first element
 * @size: length of the array
 * @value: target value to be searched
 * Return: index of value, -1 if not found
 * */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0) {
        return -1;
    }
    return advanced_binary_recursive(array, 0, size - 1, value);
}

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t i;

    if (left <= right) {
        size_t mid;
        printf("Searching in array: ");
        for (i = left; i <= right; ++i)
        {
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("\n");

        mid = (left + right) / 2;
        if (array[mid] == value) {
            if (mid == left || array[mid - 1] != value) {
                return mid;
            }
        }
        if (array[mid] < value) {
            return advanced_binary_recursive(array, mid + 1, right, value);
        } else {
            return advanced_binary_recursive(array, left, mid - 1, value);
        }
    }
    return -1;
}
