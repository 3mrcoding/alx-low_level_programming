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

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			y += atoi(argv[i]);
		}
	}
	printf("%d\n", y);
	return (0);
}
