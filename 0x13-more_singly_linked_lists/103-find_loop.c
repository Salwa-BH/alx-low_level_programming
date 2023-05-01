#include "lists.h"

/*
 * find_listint_loop -  finds the loop in a linked list.
 * @head:  pointer of linked list
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_1, *node_2;

	node_1 = node_2 = head;
	while (node_1 && node_2 && node_2->next)
	{
		node_1 = node_1->next;
		node_2 = node_2->next->next;
		if (node_1 == node_2)
		{
			node_1 = head;
			break;
		}
	}
	if (!node_1 || !node_2 || !node_2->next)
		return (NULL);
	while (node_1 != node_2)
	{
		node_1 = node_1->next;
		node_2 = node_2->next;
	}
	return (node_2);
}
