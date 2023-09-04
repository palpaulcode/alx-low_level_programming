#include <stdlib.h>
/**
 * str_concat - concatenates two strings and gives
 * them a new space in memory.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new string in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str; /* newly allocated memory space */
	unsigned int strlen = 0, str1len = 0, str2len = 0, i, j;

	/* if null is passed, treat as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[str1len] != '\0') /* get length of str s1 */
	{
		str1len++;
		strlen++;
	}

	/* add length of str s2 to length of str s1 */
	while (s2[str2len] != '\0')
	{
		strlen++; /* length of the two strings */
		str2len++;
	}
	/* reserve memory space for the new string */
	new_str = malloc(sizeof(char) * (strlen + 1));

	if (new_str == NULL) /* handle malloc return */
		return (NULL);

	for (i = 0; i < str1len; i++) /* copy s1 to new memory */
		new_str[i] = s1[i];

	for (j = 0; j < str2len; i++, j++) /* copy s2 to new memory */
		new_str[i] = s2[j];

	new_str[strlen] = '\0'; /* append terminating null byte*/

	return (new_str);
}
