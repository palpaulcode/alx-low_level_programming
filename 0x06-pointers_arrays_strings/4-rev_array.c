/**
 * reverse_array - reverses the elements of an int array
 * @a: int array
 * @n: length of the array 
 *
 * Return: has void return type
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, tmp;

	j = n - 1;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
	}

	return;
}

