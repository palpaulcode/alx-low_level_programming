/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: return the encoded string
 */
char *rot13(char *s)
{
	int i, j; 

	char st[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rt[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (st[j] != '\0')
		{
			if (s[i] == st[j])
			{
				s[i] = rt[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
