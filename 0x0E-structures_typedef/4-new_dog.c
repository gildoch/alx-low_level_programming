#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - calculate the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
  * *_strcpy - copies the string pointed to by src, including \0.
  * @src: source pointer
  * @dest: destination pointer
  * Return: the dest pointer
  */
char *_strcpy(char *dest, char *src)
{
	int i, x, len;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (x = 0; x <= len; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}

/**
  * new_dog - function that creates a new dog.
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: void
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
