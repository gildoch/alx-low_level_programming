#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: diagonal length
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int x = 0;

			while (x < i)
			{
				_putchar(' ');
				x++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
