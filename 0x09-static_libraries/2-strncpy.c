#include "main.h"

/**
  * _strncpy - function that copies a string.
  * @src: string to copied
  * @dest: string to copy to
  * @n: number o caracter to copy from src
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
