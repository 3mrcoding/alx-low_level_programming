#include "function_pointers.h"
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
    long unsigned int i = 0;

    if (size <= 0 || array == NULL || action == NULL)
    {
        return;
    }

    for (; i < size; i++)
    {
        (*action)(array[i]);
    }
}
