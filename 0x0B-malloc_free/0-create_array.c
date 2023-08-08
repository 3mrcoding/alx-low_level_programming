#include <stdio.h>
#include <stdlib.h>

/**
 * create_arry - creats an array with char c
 *
 * @size: size of array
 * @c: char
 *
 * Return: A pointer to the char array
*/

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
		return (ar);
	}
}
