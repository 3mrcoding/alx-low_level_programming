#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints string
 *
 * @n: string no of elements
 * @a: array
 *
 */

void print_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0; a[i] != '\0'; i++)
	{
	}
	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d\n", a[x]);
		}
	}
}
