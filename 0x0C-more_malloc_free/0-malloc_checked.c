#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory
 * 
 * @b: size of allocated memory in bytes
 * 
 * Return: a pointer
*/

void *malloc_checked(unsigned int b)
{
    int *i = (int *) malloc(sizeof(b));

    if (i == NULL)
    {
        return ("98");
    }
    return (i);
}
