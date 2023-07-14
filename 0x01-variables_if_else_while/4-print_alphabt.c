#include <stdio.h>

/**
 * main - Enrty point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
		{
			x = x+1;
		}
		else
		{
			putchar(x);
		}
	}

	putchar('\n');
	return (0);
}
