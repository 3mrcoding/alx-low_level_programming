
/**
 *
 *
 *
 *
 */

char *cap_string(char *n)
{
	int i;
	int x;

	for (i = 0; n[i] != '\0'; i++)
	{
	}

	for (x = 0 ; x < i; x++)
	{
		int y;
		int z;

		y = n[x];
		z = n[x - 1];

		if (y <= 122 && y >= 97)
		{
			if ( z < 65 || z > 122 || z == 92)
			{
				y = y;
			}
			y = y - 32;
			n[x] = y;
		}
	}
	return (n);
}
