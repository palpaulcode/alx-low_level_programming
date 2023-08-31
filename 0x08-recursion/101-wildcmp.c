/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: '1' if the strings can be considered identical,
 * '0' otherwise
 */
int wildcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	if (s1[x] == '\0' && s2[y] == '\0')
		return (1);

	if (s1[x] == s2[y])
		return (wildcmp(s1 + 1, s2 + 1));

	if (s2[y] == '*' && s2[y + 1] != '\0' && s1[x] == '\0')
		return (0);

	if (s2[y] == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
