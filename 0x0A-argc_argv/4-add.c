#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding function
 *
 * @argc: no. of arguments
 * @argv: string
 *
 * Return: Always (0)
*/

int main(int argc, char *argv[])
{
	int i;
	int y = 0;

	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		if (x == '\0')
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
