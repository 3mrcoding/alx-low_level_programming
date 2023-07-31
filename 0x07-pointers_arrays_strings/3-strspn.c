
/**
 *
 *
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int x;
	int y;
	int *p;

	y = 0;
	p = &y;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[i])
			{
				return (*p + 1);
				x++;
			}
			else
			{
				x++;
			}
		}
	}
	return (*p);
}
