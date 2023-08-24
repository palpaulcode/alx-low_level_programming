/**
 * cap_string - capitalize all words of a string
 * @p: the string to capitalize words
 *
 * Return: returns a reference to the capitalized string
 */
char *cap_string(char *p)
{
	int i = 0, j, k;

	char st[] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'}; /* 13 elements */

	char num[] = {'0', '1', '2', '3', '4', '5', '6',
		'7', '8', '9'}; /* 10 characters */

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			j = 0;
			k = 0;
			while (j < 13)
			{
				if (p[i - 1] == st[1])
					p[i - 1] = ' ';
				if (p[i - 1] == st[j])
					p[i] = p[i] - 32;
				j++;
			}
			while (k < 10)
			{
				if (p[i - 1] == num[k])
					p[i] = p[i] - 32;
				k++;
			}
		}
		i++;
	}

	return (p);
}
