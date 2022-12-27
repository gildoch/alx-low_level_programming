#include <stdio.h>

/**
  * times_table - prints the 9 times table, starting with 0
  * Return: Void
  */
void times_table(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (x == 0)
			{
				printf("%d,", i * x);
			}
			else
			{
				if (x != 9)
				{
					if (i * x < 10)
					{
						printf("  %d,", i * x);
					}
					else
					{
						printf(" %d,", i * x);
					}
				}
				else
				{
					if (i * x < 10)
					{
						printf("  %d", i * x);
					}
					else
					{
						printf(" %d", i * x);
					}
				}
			}
		}
		putchar('\n');
	}
}
