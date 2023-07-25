#include "main.h"

/**
 * _puts - function prints string
 *
 * @str: string location in memory
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
