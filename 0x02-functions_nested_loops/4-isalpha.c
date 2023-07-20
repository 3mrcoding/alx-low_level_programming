#include "main.h"

/**
 * _isalpha - function return 1 if the entered char is lowercase
 *@c: char to int
 * Return: Always (0)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
