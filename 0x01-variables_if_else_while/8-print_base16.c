#include <stdio.h>

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	char ii;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
	}

	for (ii = 'a'; ii <= 'f'; ii++)
	{
		putchar(ii);
	}
	putchar('\n');
	return (0);
}
