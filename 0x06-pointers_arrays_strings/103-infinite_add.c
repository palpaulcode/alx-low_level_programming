/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: buffer to store the result
 * @size_r: the size of the buffer
 * Return: returns the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	i--; /* i -= 1 */
	j--; /* j -= 1 */

	for (; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		if (i >= 0)
			n += n1[i] - '0';

		if (j >= 0)
			n += n2[j] - '0';

		if (i < 0 && j < 0 && n == 0)
			break;

		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	k -= 1;
	for (; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);
}
