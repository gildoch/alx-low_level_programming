#include "main.h"

/**
  * _strlen_recursion - function that returns the length of a string.
  * @s: string to know the length
  * Return: length
  */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
