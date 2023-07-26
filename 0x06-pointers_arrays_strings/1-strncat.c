
/**
 * _strncat - function that concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: no. of bytes
 *
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
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
		dest[len1] = src[x];
		len1++;
		if (src[x] == '\0')
		{
			x = n;
		}
	}
	return (dest);
}
