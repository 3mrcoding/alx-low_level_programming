#include "main.h"

/**
 * _isupper - check if the entered char is uppercase or not
 *
 * @c: entered char
 *
 * Return: (1) if upper case & (0) if else
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
