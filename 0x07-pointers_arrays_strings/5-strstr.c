
/**
 * _strstr - function to search for a char
 *
 * @haystack: string
 * @needle: word to be searched for
 *
 * Return: null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (x = 0; haystack[x] != '\0'; x++)
		{
			if (needle[i] == haystack[x])
			{
				return (&needle[i]);
				x++;
				i++;
			}
		}
	}
	return ('\0');
}

