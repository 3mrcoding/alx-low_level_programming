#include "main.h"

/**
 * _islower - print 1 if number is capital
 *
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return(0);
}
