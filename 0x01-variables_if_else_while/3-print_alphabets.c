#include <stdio.h>

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char ii;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (ii = 'A'; ii <= 'Z'; ii++)
	{
		putchar(ii);
	}
	putchar('\n');
	return (0);
}
