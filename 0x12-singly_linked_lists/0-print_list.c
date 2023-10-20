#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
  * print_list - function that prints all the elements of a list_t list
  * @h: node to print
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	int lst_len = 0;


	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		lst_len++;
	}

	return (lst_len);
}
