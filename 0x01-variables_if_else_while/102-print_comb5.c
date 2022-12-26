#include <stdio.h>

/**
  * main -Entrt point
  *
  * description: 'print possible combinations of two two-digit numbers'
  *
  * Return: 0
  */

int main(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (x = 0; x < 10; x++)
			{
				for (y = 0; y < 10; y++)
				{
					if (i + j != x + y && i + j < 99)
					{
						putchar('0' + i);
						putchar('0' + j);
						putchar(' ');
						putchar('0' + x);
						putchar('0' + y);
					}
					if (i + j + x + y != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
