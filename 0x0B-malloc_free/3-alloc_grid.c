#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: string
 * @height: string
 *
 * Return: A pointer to the 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **a;
	int b;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	
	a = malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = malloc(width * sizeof(int));
	}
	return (a);
}
