#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number given
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (r > 0)
	{
		_putchar ('0' + r);
		return (r);
	}
	_putchar ('0' + -r);
	return (-r);
}
