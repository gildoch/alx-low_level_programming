#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, x, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (x = len - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
