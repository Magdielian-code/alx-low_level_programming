#include "search_algos.h"

/**
Linear search - searches for a value within an array of integers one after the other.
*/

int linear_search(int *array, size_t size, int value)
{
    size_t x;

    if (array == NULL)
    {
        return (-1);
    }

    for (x=0; x < size; x++)
    {
        printf("Value checked array[%li] = [%i]\n", x, array[x]);
        if (array[x] == value)
        {
            return (x);
        }
    }
    return (-1);
}
