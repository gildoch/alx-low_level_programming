#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i, x, j, len;
	char fstchar, lstchar;

	len = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (x = len - 1; x > j; x--)
	{
		fstchar = s[j];
		lstchar = s[x];
		s[j] = lstchar;
		s[x] = fstchar;
		j++;
	}
}
