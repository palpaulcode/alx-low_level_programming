#include <string.h>

/**
 * s_is_palindrome - checks if string s is palindrome
 * @s: string to check
 * @len: length of string s
 * @rev: index of last character of string s
 *
 * Return: `1` if s is palindrome, `0` if not
 */
int s_is_palindrome(char *s, int len, int rev)
{
	if (*s == '\0' || len < 0 || rev < 0)
		return (0);
	if (len >= rev)
		return (1);
	if (s[len] == s[rev])
		return (s_is_palindrome(s, len + 1, rev - 1));
	return (0);
}

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: the string to check
 *
 * Return: 1 for palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len  = strlen(s);

	return (s_is_palindrome(s, i, len - 1));
}
