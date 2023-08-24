/**
 * reverse_array - reverses the elements of an int array
 * @a: int array
 * @n: length of the array 
 *
 * Return: has void return type
 */
void reverse_array(int *a, int n)
{
	int r[n];
	int i = 0, j = 0;

	while (n >= 0)
	{
		r[i] = *(a + n);
		i++;
		n--;
	}
	while (j <= n)
	{
		*(a + j) = r[j];
		j++;
	}
	return;
}

