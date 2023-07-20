#include "main.h"


/**
 * more_numbers - display required numbers from 0 to 9
 *
 *
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar('0' + b);
		}

		for (b = 10; b <= 14; b++)
		{
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
		}
		_putchar('\n');
	}
}
