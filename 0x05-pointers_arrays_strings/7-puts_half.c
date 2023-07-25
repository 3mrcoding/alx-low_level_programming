#include "main.h"

/**
 * _puts - function prints string
 *
 * @str: string location in memory
 *
 */

void puts_half(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (x = (i / 2); x < i; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
