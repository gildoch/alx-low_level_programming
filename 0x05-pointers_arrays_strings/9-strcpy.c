#include "main.h"
#include <stdio.h>
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
