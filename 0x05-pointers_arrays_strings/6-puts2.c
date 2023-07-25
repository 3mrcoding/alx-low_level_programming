#include "main.h"

/**
 * puts2 - function prints string
 *
 * @str: string location in memory
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}