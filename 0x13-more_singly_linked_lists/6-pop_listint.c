#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head node of a listint_t
  * @head: node to  pop
  * Return: node deleted
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!*head)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
