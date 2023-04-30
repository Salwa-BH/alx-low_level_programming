#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -   inserts a new node at a given position.
 * @head: double pointer of the list
 * @idx: index of node to return
 * @n: value of n of the new node
 * Return:  the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *new, *nodeBefore = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	/* if index is 0, add it at the beginning*/
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	/* if index in center or the end*/
	while (current)
	{
		if (i == idx)
		{
			if (current->next == NULL)
				return (add_nodeint_end(head, n));
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current;
			nodeBefore->next = new;
			return (new);
		}
		nodeBefore = current;
		current = current->next;
		i++;
	}
	return (NULL);
}
