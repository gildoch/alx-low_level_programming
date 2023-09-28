#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  *
  * description: 'Print the alphabet in lower'
  *
  * Return: 0
  */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
	}
}
