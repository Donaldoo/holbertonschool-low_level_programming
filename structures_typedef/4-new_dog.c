#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - entry point
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: dest string
 */
char *_strcpy(char *dest, char *src)
{
	int var;

	for (var = 0; src[var] != '\0'; var++)
		dest[var] = src[var];
	dest[var] = '\0';
	return (dest);
}

/**
 * _strlen - entry point
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}

/**
 * new_dog - new structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	(*new_dog).name = malloc(1 + sizeof(char) * _strlen(name));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).owner = malloc(1 + sizeof(char) * _strlen(owner));
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}

	(*new_dog).age = age;
	(*new_dog).name = _strcpy((*new_dog).name, name);
	(*new_dog).owner = _strcpy((*new_dog).owner, owner);

	return (new_dog);
}
