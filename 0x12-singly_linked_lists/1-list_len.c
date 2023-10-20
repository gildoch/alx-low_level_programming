#include <stdio.h>
#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: node
  * Return: returns the number of elements
  */
size_t list_len(const list_t *h)
{
	size_t lst_len = 0;

	while (h)
	{
		lst_len++;
		h = h->next;
	}

	return (lst_len);
}
