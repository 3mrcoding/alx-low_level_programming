#include "main.h"

/**
 * print_alphabet - utilize _putchar function to print alphabet
 *
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(0 + i);
	}
	_putchar('\n');
}
