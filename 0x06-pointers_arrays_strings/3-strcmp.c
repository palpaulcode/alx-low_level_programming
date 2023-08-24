/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns integer less than, equal to or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] != '\0' || s2[j] != '\0')
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
	}
	return (0);
}
