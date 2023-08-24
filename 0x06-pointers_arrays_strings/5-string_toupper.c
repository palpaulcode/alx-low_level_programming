/**
 * string_toupper - translates lowercasestring to uppercase
 * @p: the string to translate to upppercase
 *
 * Return: returns a reference to the translated string
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
			p[i] = p[i] - 32;
		i++;
	}

	return (p);
}
