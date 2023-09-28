#include "main.h"

/**
  * leet - function that encodes a string into 1337.
  * @str: string to encode
  * Return: char
  */
char *leet(char *str)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (str[i] == l[j])
			{
				k = j;
				str[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (str);
}
