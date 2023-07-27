
/**
 * string_toupper - function that changes all to uppercase.
 *
 * @n: string
 *
 * Return: capitalized string
 */

char *string_toupper(char *n)
{
	int i;
	int x;

	for (i = 0; n[i] != '\0'; i++)
	{
	}
	for (x = 0; x < i; x++)
	{
		int y;

		y = n[x];

		if (y <= 122 && y >= 97)
		{
			y = y - 32;
			n[x] = y;
		}
	}
	return (n);
}
