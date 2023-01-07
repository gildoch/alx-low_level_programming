#include "main.h"

/**
  * reverse_array -  reverses the content of an array of integers.
  * @a: an array of integers
  * @n: the number of elements to swap
  * Return: 0
  */
void reverse_array(int *a, int n)
{
	int i, x;
	int fstnum, lstnum;

	x = 0;
	for (i = n - 1; i > x; i--)
	{
		fstnum = a[x];
		lstnum = a[i];
		a[x] = lstnum;
		a[i] = fstnum;
		x++;
	}
}

