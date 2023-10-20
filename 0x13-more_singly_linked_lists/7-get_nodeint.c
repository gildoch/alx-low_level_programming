#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - returns the nth node
  * @head: list start
  * @index: nth node
  * Return: nth node of a listint_t linked list
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (cnt == index)
			return (head);
		head = head->next;
		cnt++;
	}

	return (0);
}
