#include "main.h"

/**
  * _abs - Entry point
  *@n: test case
  * description: 'print the absolute value'
  *
  * Return: 0
  */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}
