
/**
 * _strlen - return lenght of a string
 *
 * @s: string location
 *
 * Return: lenght of string
 *
 */

int _strlen(char *s)
{
	int i;
	int x;

	for (i = 0; s[i] != '\0'; i++)
	{
		x++;
	}
	return (x);
}
