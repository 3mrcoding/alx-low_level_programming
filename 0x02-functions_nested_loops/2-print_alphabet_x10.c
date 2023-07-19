#include "main.h"

/**
 * print_alphabet_x10 - utilize _putchar function to print alphabet
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(0 + i);
		}
	_putchar('\n');
	}
}
