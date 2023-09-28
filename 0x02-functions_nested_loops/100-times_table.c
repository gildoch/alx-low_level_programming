#include <stdio.h>
/**
  * print_times_table - print n times table
  * @n: number of timetable
  * Return: Int
  */

void print_times_table(int n)
{
	int i, x;

	if (n >= 0 && n <= 15)
	{

		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				if (x != 0)
				{
					if (i * x < 10)
					{
						printf(",   ");
					}
					else if (i * x > 9 && i * x < 100)
					{
						printf(",  ");
					}
					else if (i * x >= 100 && i * x < 1000)
					{
						printf(", ");
					}
					else
					{
						printf(",");
					}
				}
				printf("%d", i * x);
			}
			putchar('\n');
		}
	}
}
