#include "main.h"

/**
 * print_line - print line with certain lenght
 *
 * @n: lenght of line
 * Return: line
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	{
		_putchar('\n');
	}
}
