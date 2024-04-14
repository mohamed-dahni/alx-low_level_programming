#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            printf("Found %d at index %d\n", value, i);
            return i;
        }
    }

    return -1;
}