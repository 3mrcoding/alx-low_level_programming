
/**
 * swap_int - swap two integers with each other
 *
 * @a: first integer address
 * @b: second integer address
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
