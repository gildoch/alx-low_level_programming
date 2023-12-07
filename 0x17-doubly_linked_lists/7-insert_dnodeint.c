#include "lists.h"

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: list start
  * @idx: index to insert
  * @n: data to insert
  * Return:  the address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || h == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;
	current = *h;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	while (current)
	{
		if (current->next == NULL && count == idx - 1)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if (count == idx - 1)
		{
			new->next = current->next;
			new->prev = current;
			current->next->prev = new;
			current->next = new;
			return (new);
		}

		current = current->next;
		count++;
	}
	free(new);
	return (NULL);
}
