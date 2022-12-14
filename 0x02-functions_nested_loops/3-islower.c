#include "main.h"

/**
  * _islower - Entry point
  *
  * description: 'check if char is lower'
  *@c: test case
  *
  * Return: 0
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

