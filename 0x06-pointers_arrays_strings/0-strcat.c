#include "main.h"

/**
  * _strcat - function that concatenates two strings.
  * @src: string to be copied
  * @dest: string to copy to
  * Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int i, x, len;

	len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	x = 0;
	while (src[x] != '\0')
	{
		dest[len] = src[x];
		len++;
		x++;
	}

	dest[len] = '\0';
	return (dest);
}
