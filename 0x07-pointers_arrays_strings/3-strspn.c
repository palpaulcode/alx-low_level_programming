/**
 * _strspn - gets the length of a prefix substring
 * @s: the first string
 * @accept: second string to check prefix for in string 's'
 *
 * Return: returns the length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int k = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				k++;
			if (accept[j + 1] == '\0')
				return (k);
			j++;
		}
		i++;
	}
	return (k);
}
