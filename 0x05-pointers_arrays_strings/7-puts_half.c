#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print.
 */

void puts_half(char *str)
{
	int i, x, len, half;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	half = (len - 1) / 2;

	for (x = half + 1; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
