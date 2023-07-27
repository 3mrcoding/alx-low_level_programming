
/**
 * reverse_array - Function to reverse an array
 *
 * @a: array
 * @n: number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
