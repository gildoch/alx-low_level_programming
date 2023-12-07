#include "lists.h"
/**
  * get_dnodeint_at_index - get nth node of a list
  * @head: list start
  * @index: node to get
  * Return: node or NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == idx)
			return (head);

		idx++;
		head = head->next;
	}

	return (NULL);
}
