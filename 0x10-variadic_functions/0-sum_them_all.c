#include <stdarg.h>

/**
 *  sum_them_all - function return sum of all entered int
 *
 * @n: number of entered arguments
 *
 * Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int i = 0;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}

	else
	{
		for (x = 0; x < n; x++)
		{
			i = va_arg(args, int) + i;
		}
	}
	va_end(args);
	return (i);
}
