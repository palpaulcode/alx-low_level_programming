/**
 * leet - encodes a string into 1337
 * @s: the string to work with
 *
 * Return: returns the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL"; /* 10 elements */
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (j < 10)
		{
			if(s[i] == l[j])
				s[i] = n[j];
			j++;
		}
	}
	return (s);
}

