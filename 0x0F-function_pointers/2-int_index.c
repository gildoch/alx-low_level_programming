#include "function_pointers.h"

/**
  * int_index - function that searches for an integer.
  * @array: array to search number
  * @size: length of array
  * @cmp: function to compare values
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
