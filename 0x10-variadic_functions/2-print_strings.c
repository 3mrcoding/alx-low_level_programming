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
	unsigned int x;
	char *i;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (x = 1; x <= n; x++)
		{
			i = va_arg(args, char*);
			if (i == NULL)
			{
				printf("(nil)");
				exit(0);
			}
			if (x != n)
			{
				printf("%s", i);
				printf("%s", separator);
			}
			else
			{
				printf("%s", i);
			}
		}
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			i = va_arg(args, char*);
			printf("%s", i);
		}
	}
	va_end(args);
	printf("\n");
}
