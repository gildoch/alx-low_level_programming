#include "main.h"
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: concatened string
  */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i, j, x, z;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		ptr[x] = s1[x];


	for (z = 0; z < (len1 + len2); z++)
	{
		ptr[x] = s2[z];
		x++;
	}

	ptr[x] = '\0';
	return (ptr);
}
