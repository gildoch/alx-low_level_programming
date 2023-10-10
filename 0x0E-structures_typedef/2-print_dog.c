#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * print_dog - function that prints a struct dog
  * @d: pointer to dog struct
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (!d->age)
			printf("Age: %f\n", 0.0);
		else
			printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
