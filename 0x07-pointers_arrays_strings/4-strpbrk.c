

/**
 * _strpbrk - function to print the following char
 *
 * @s: string
 * @accept: searching char
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (x = 0; accept[x] >= '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				for (; s[i] >= '\0'; i++)
				{
					return (&s[i]);
				}
			}
		}
	}
	return ('\0');
}
