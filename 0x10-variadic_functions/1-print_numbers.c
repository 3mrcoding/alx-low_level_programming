#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers that add as argument
 *
 * @separator: char used to seperate between numbers
 * @n: number of arguments which will entered
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int i;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (x = 1; x <= n; x++)
		{
			i = va_arg(args, int);

			if (x != n)
			{
				printf("%d", i);
				printf("%s", separator);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
	}
	va_end(args);
	printf("\n");
}
