#include "lists.h"

/**
  * dlistint_len - number of elements in a linked dlistint_t list.
  * @h: node
  * Return: number of elements in a linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lst_len = 0;

	while (h != NULL)
	{
		h = h->next;
		lst_len++;
	}

	return (lst_len);
}
