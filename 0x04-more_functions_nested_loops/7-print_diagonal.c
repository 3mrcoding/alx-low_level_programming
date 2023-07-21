#include "main.h"

/**
 *print_diagonal - prints a diagonal
 *@n:parameter
 *Return:returns nothing
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int x;
		int y;

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= x; y++)
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
	{
		_putchar('\n');
	}
}
