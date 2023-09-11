#include "dog.h"
#include <stdlib.h>

/**
 * str_len - get and return length of a string
 * @str: the string to get length of
 *
 * Return: length of string (int)
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return len;
}

/**
 * str_cpy - copy a string
 * @str1: string to copy to
 * @str2: string to copy
 * Return: pointer to the destination string
 */
char *str_cpy(char *str1, char *str2)
{
	int i = 0, s2len;

	s2len = str_len(str2);

	for (i = 0; i <= s2len; i++)
		str1[i] = str2[i];

	return (str1);
}

/**
 * new_dog - uses variable of type dog_t to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the new dog of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*struct dog *newdog;*/
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL) /* handle malloc return */
		return (NULL);

	(*dog).name = malloc(sizeof(char) * (str_len(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	/*if ((*dog).age < 0)*/
	(*dog).owner = malloc(sizeof(char) * (str_len(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}

	dog->name = str_cpy((*dog).name, name);
	dog->age = age;
	dog->owner = str_cpy((*dog).owner, owner);

	return (dog);
}
