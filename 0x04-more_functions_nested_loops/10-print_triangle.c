#include "main.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: size of the triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			int x = size - i - 1;
			int j = 0;

			while (j <= i)
			{
				while (x > 0)
				{
					_putchar(' ');
					x--;
				}
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
}
