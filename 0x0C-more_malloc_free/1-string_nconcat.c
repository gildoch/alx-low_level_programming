#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * string_nconcat - function that concatenates two strings.
  * @s1: first string
  * @s2: second string
  * @n: number of chars to concatenate
  * Return: full string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, len1, len2, num, strlenf;
	char *str;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (num < 0)
		return (NULL);

	if (num >= len2)
		num = len2;
	strlenf = len1 + num + 1;

	str = malloc(sizeof(char) * strlenf);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < num; j++, i++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);
}
