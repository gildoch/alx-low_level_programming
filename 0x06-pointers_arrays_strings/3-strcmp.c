#include "main.h"

/**
  * _strcmp -  function that compares two strings.
  * @s1: first input
  * @s2: second input
  * Return: int
  */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

