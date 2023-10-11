#include "function_pointers.h"
/**
  * array_iterator - function that executes a function given as a parameter
  * @array: given array
  * @size: size of array
  * @action: function action to execute
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
