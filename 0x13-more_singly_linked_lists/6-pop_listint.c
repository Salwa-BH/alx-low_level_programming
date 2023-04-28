#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: name of the list
 * Return:  the head node’s data (n) or 0 if empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *second;

	if (*head == NULL)
		return (data);

	if (*head)
	{
		data = (*head)->n;
		second = (*head)->next;
		free(*head);
		*head = second;
	}
	return (data);
}
