/**
 *
 *
 *
 *
 *
 */

char *rot13(char *n)
{
	int i;
	int k;
	char x[] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm'};
	char y[] = {'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (k = 0; k <= 13; k++)
		{
			if (n[i] == x[k])
			{
				n[i] = y[k];
				k = 13;
			}
			else if (n[i] == y[k])
			{
				n[i] = x[k];
				k = 13;
			}
		}
	}
	return (n);
}
