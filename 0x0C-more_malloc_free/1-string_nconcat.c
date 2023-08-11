#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: no. of bytes to be taken from s2
 * Return: A pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int b;
	unsigned int j;
	unsigned int k;
	char *i;

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
	{
		n = b;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = malloc(a + b + 1);
	if (i == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < a; j++)
	{
		i[j] = s1[j];
	}
	for (k = 0; k <= n; k++)
	{
		i[j] = s2[k];
		j++;
	}
	i[j] = '\0';
	return (i);
}
