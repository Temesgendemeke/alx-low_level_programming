#include "search_algos.h"




int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0) {
        return -1;
    }
    return advanced_binary_recursive(array, 0, size - 1, value);
}

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    if (left <= right) {
        printf("Searching in array: ");
        for (size_t i = left; i <= right; ++i) {
            printf("%d", array[i]);
            if (i < right) {
                printf(", ");
            }
        }
        printf("\n");

        size_t mid = (left + right) / 2;
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