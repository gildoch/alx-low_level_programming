#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - create a grid
  * @width: width of grid
  * @height: height of grid
  * Return: grid
  */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (!ptr[i])
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);

			free(ptr);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			ptr[j][i] = 0;
	}

	return (ptr);
}
