#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creats a copy of an array
 *
 * @str: string wanted to be copied
 *
 * Return: A pointer to the char array
*/

char *_strdup(char *str)
{
	unsigned int x;
	unsigned int i;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; str[x] != '\0'; x++)
		{
		}
		ar = malloc((x + 1) * sizeof(char));

		for (i = 0; i <= x; i++)
		{
			ar[i] = str[i];
		}
		return (ar);
	}
}
