#include <stdio.h>

/**
  * main - Entry point
  *
  * description: 'Programm that print numbers from 0 until 10
  *
  * Return: Success (0)
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
	return (0);
}
