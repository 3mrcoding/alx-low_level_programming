

/**
 * _strchr - function to print the following char
 *
 * @s: string
 * @c: searching char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (x = 0; x < i; x++)
	{
		if (s[x] == c)
		{
			for (; x < i; x++)
			{
				return (&s[x]);
			}
		}
	}
	return ('\0');
}
