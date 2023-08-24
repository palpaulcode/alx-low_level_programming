/**
 * cap_string - capitalize all words of a string
 * @p: the string to capitalize words
 *
 * Return: returns a reference to the capitalized string
 */
char *cap_string(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if ((p[i] >= 'a' && p[i] <= 'z') && 
				((p[i - 1] >= '\0' && p[i - 1] <= '\?') || (p[i - 1] >= '\\' && p[i - 1] <= '`')))
			p[i] = p[i] - 32;
		i++;
	}

	return (p);
}
