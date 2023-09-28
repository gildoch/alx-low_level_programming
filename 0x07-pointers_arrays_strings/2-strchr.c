#include "main.h"

/**
  * _strchr -  function that locates a character in a string.
  * @s: string to search the occurence of c
  * @c: char to locate
  * Return: char
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
