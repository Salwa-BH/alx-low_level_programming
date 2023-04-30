#include "lists.h"

/**
 * get_nodeint_at_index -   returns the nth node of a listint_t linked list.
 * @head: name of the list
 * @index: index of node to return
 * Return:  the nth node of a listint_t linked list or NULL if does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL )
		return (NULL);

	while (head)
	{
		if (i == index)
			return head;
		head = head->next;
		i++;
	}
	return (NULL);
}
