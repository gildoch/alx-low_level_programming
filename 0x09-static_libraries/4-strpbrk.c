#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - function that searches a string for any of a set of bytes.
  * @s: string to search the occurence of accept
  * @accept: char to locate
  * Return: pointer
  */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
