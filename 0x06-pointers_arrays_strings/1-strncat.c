#include "main.h"

/**
  * _strncat - function that concatenates two strings.
  * @src: string to copy
  * @dest: string to concat with
  * @n: number or caracter to copy
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, x, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[len] = src[x];
		len++;
		x++;
	}

	dest[len] = '\0';
	return (dest);
}
