#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: node start
  * @n: datai
  * Return: new node address or NULL if fail
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (*head);
}
