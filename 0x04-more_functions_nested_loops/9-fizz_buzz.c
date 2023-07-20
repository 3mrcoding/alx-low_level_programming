#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int x;
	char *BF;
	char *B;
	char *F;

	BF = "FizzBuzz";
	F = "Fizz";
	B = "Buzz";

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s ", BF);
		}
		else if (x % 3 == 0)
		{
			printf("%s ", F);
		}
		else if (x % 5 == 0)
		{
			printf("%s ", B);
		}
		else
		{
			printf("%d ", x);
		}
	}
	putchar('\n');
	return (0);
}
