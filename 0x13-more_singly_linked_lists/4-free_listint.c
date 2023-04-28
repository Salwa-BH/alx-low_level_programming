#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  frees a list.
 * @head: name of the list
 * Return:  nothing.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
