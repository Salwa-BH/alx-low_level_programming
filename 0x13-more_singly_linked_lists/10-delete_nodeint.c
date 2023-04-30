#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -   deletes a  node at a given position.
 * @head: double pointer of the list
 * @index: index of node to delete
 * Return:  1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *nodeBefore = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	/* if index is 0, delete the head */
	if (index == 0)
	{
		current  = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}

	current = *head;
	/* if index in center or the end*/
	while (current)
	{
		if (i == index)
		{
			nodeBefore->next = current->next;
			return (1);
		}
		nodeBefore = current;
		current = current->next;
		i++;
	}
	return (-1);
}
