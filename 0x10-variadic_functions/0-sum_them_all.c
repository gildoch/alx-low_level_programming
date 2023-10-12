#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: n args
* Return: Sum of arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(nums, int);
		}
		va_end(nums);
	}
	return (sum);
}
