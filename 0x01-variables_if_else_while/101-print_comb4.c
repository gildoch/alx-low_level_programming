#include <stdio.h>

/**
  * main - Entry Point
  *
  * description: 'Print three digits combination'
  *
  * Return: 0
  */

int main(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (x = 0; x < 10; x++)
			{
				if (i != j && j != x && i < j && j < x)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + x);

					if (i + j + x != 24)
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
