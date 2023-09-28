#include "main.h"
#include <stdbool.h>
/**
  * _strspn - function that gets the length of a prefix substring
  * @s: string to look substring
  * @accept: string to check match
  * Return: int
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len;
	bool found_match;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found_match = false;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}

		if (!found_match)
		{
			break;
		}
		else
		{
			len++;
		}
	}

	return (len);
}

