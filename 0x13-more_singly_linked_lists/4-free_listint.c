#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - frees a listint_t list.
  * @head: node
  * Return: 0 on Success
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
