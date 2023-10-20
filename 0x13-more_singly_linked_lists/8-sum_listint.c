#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint - returns the sum of all the data (n)
  * @head: start of the list
  * Return: sum of all the data (n) of a listint_t linked list.
  */

int sum_listint(listint_t *head)
{
	unsigned int cnt = 0;
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
		cnt++;
	}

	return (sum);
}
