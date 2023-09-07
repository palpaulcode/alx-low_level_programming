#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates string s1 with n bytes from string s2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns a pointer to the new  string in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = 0, s1len = 0, s2len = 0, i, j;
	/* treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0') /* get length of string s1 */
		s1len++;

	while (s2[s2len] != '\0') /* get length of string s2 */ 
		s2len++;

	if (n < s2len) /* find bytes to reserve in memory */
		len = s1len + n;
	else
		len = s1len + s2len;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL) /* handle malloc return */
		return (NULL);

	for (i = 0; i < s1len; i++) /* copy string 1*/
		str[i] = s1[i];

	for (j = 0; j < n; j++, i++) /* copy string 2 */
		str[i] = s2[j];

	str[len] = '\0';

	return (str);
}

