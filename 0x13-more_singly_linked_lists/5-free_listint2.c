#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	if (*head == NULL)
		return;

	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
