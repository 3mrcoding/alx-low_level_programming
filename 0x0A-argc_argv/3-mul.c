#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplcation function
 *
 * @argc: no. of arguments
 * @argv: string
 *
 * Return: Always (0)
*/

int main(int argc, char *argv[])
{
	int i;
	int y = 1;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			int x = atoi(argv[i]);

			y *= x;
		}
	printf("%d\n", y);
	}
	return (0);
}
