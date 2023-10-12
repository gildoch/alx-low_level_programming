#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: string between numbers
  * @n: number of numbers passed to func
  * Return: nums
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (n)
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(nums, int));

			if (separator && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(nums);
}
