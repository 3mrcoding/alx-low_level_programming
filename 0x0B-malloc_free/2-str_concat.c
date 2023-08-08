#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: A pointer to the char array
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int x;
	unsigned int i;
	char *a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
	}

	a = malloc((x + i + 1) * sizeof(char));
	for (x = 0; s1[x] != '\0'; x++)
	{
		a[x] = s1[x];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		a[x] = s2[i];
		x++;
	}
	a[x] = '\0';
	return (a);
}
