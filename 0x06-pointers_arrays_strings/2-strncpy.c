
/**
 * _strncpy - function that copy strings
 *
 * @dest: first string
 * @src: second string
 * @n: no. of bytes
 *
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int x;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
	}

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
		if (src[x] == '\0')
		{
			x = n;
		}
	}
	return (dest);
}
