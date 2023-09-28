#include "main.h"

/**
 * print_last_digit - returns absolute value of an int
 * @n: test value
 * Return: int.
 */

int print_last_digit(int n)
{
	int lst;

	if (n < 0)
	{
		n = (n * -1);
	}

	lst = (n % 10);
	if (lst < 0)
	{
		lst = (lst * -1);
	}
	_putchar(lst + '0');

	return (lst);
}
