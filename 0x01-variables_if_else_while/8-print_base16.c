#include <stdio.h>

/**
  * main -Entry point
  *
  * description: 'program that prints all the numbers of base 16 in lowercase'
  *
  * Return: Succes 0
  */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (num = 'a'; num <= 'f'; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
