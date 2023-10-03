#include "main.h"
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string to copy
  * Return: pointer
  */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, j, lenght;

	lenght = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		lenght++;
	}

	ptr = malloc(sizeof(char) * (lenght + 1));


	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= lenght; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
