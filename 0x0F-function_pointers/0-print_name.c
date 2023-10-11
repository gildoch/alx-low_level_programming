#include "function_pointers.h"
#include <stdlib.h>
/**
  * print_name - function that prints a name.
  * @name: name to be printed
  * @f: function to print the name
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}



