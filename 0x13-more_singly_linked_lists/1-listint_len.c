#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: node to print
 * Return: the number of node
 *
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
