
/**
 * _memset - function that replcae certain bytes
 *
 * @s: array
 * @b: char wanted to be replaced
 * @n: no. of bytes
 *
 * Return: address of pointer
 *
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (&s);
}
