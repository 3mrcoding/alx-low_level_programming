#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - print strings that add as argument
 *
 * @separator: char used to seperate between numbers
 * @n: number of arguments which will entered
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n == 0)
		return;

	unsigned int x;
	char *i;
	va_list args;

	va_start(args, n);

	for (x = 1; x <= n; x++)
	{
		i = va_arg(args, char *);
		if (i == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", i);
		}

		if (x < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
