#include "main.h"
#include <stdio.h>

void print_to_98(int n)
{
	if (n > 0 && n < 98)
	{
		n++;
		printf("%d, ", n);
		_putchar('\n');
	}
	else if (n > 98)
	{
		n--;
		printf("%d, ", n);
		_putchar('\n');
	}
	else (n < 0 && n < 98)
	{
		n++;
		printf("%d, ", n);
		_putchar('\n');
	}
}
