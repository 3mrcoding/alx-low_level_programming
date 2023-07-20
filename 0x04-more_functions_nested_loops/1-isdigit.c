#include "main.h"

/**
 * _isdigit - check if the entered is degit or not
 *
 * @c: entered character
 *
 * Return: (1) if diget & (0) if else
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
