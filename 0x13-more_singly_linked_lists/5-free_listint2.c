#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - function that frees a listint_t list.
  * @head: node to free
  * Return: 0 on Success
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
