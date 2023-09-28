#include <stdio.h>

/**
  * main - Entry point
  *
  * description: "prints all possible combinations of single-digit numbers"
  *
  * Return: Success 0
  */

int main(void)
{
	int combination = 0;

	while (combination < 10)
	{
		putchar(combination + '0');

		if (combination != 9)
		{
			putchar(',');
			putchar(' ');
		}
		combination++;
	}

	putchar('\n');
	return (0);
}
