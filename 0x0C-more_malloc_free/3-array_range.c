#include "main.h"
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers.
  * @min: min number
  * @max: max number
  * Return: array of integers
  */
int *array_range(int min, int max)
{
	int i, len;

	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(len * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}
