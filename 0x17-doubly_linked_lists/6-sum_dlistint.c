#include "lists.h"
/**
  * sum_dlistint - sum of all the data (n) of a list
  * @head: list start
  * Return: the sum of all the data (n)
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
