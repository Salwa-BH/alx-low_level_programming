#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list..
 * @head: name of the list
 * Return:  the sum of all the data (n) of 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL )
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
