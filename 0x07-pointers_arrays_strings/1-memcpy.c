
/**
 * _memcpy - function that replcae certain bytes
 *
 * @dest: array
 * @src: char wanted to be replaced
 * @n: no. of bytes
 *
 * Return: address of pointer
 *
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
