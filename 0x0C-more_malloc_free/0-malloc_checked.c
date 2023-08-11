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
	void *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (i);
}
