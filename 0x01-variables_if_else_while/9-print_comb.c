#include <stdio.h>

/**
 * main - Enrty point
 *
 * @x -intiger numbr
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 9)
		{
			putchar('0' + x);
		}
		else
		{
		putchar('0' + x);
		putchar(',');
		putchar(' ');
		}
	}
	return (0);
}
