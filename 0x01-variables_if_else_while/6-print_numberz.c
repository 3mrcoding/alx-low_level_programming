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
		putchar('0' + x);
	}
	putchar('\n');
	return (0);
}
