#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Program thati prints the last digit of a random number'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
