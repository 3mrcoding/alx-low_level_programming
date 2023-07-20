#include "main.h"

/**
 * _islower - function return 1 if the entered char is lowercase
 *
 * Return: Always (0)
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
	return (0);
}
