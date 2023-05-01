#include "lists.h"

/*
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer of linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nodeBefore = NULL, *current = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);


	while (*head)
	{
		current = (*head)->next;
		(*head)->next = nodeBefore;
		nodeBefore = *head;
		*head = current;
	}
	*head = nodeBefore;
	return (*head);
}
