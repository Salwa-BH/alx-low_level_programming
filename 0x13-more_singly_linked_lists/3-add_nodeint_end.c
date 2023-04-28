#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: name of the list
 * @n: value of n in listint_t
 * Return:  address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *current;

	if (head == NULL)
		return (NULL);

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = last;
		return (last);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = last;
	return (*head);
}
