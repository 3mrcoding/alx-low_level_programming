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
		return (1);
	}
	return (0);
}
