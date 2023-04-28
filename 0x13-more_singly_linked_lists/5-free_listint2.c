#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a list recursibely using double pointers
 * @head: double pointer of the list
 * Description: frees a list
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
