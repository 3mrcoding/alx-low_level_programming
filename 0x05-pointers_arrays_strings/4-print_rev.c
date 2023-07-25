#include "main.h"

/**
 * print_rev - function prints string
 *
 * @s: string location in memory
 *
 */

void print_rev(char *s)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (x = 1; x <= i; x++)
	{
		_putchar(s[i - x]);
	}
	_putchar('\n');
}
