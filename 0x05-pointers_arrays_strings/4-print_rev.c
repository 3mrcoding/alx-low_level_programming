#include "main.h"

/**
 * _puts - function prints string
 *
 * @str: string location in memory
 *
 */

void print_rev(char *s)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (x = 0; x <= i; x++)
	{
		_putchar(s[i-x]);
	}
	_putchar('\n');
}
