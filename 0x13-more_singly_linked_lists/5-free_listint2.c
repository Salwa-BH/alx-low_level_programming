#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees a list.
 * @head: double pointer of the list
 * Return:  nothing.
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
