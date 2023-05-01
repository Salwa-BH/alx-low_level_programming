#include "lists.h"
#include <stdio.h>

/*
 * print_listint_safe - prints a list.
 * @head: head of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *lis = NULL;
	size_t counter = 0;
	size_t val;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		temp = temp->next;
		lis = head;
		val = 0;
		while (val < counter)
		{
			if (temp == lis)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (counter);
			}
			lis = lis->next;
			val++;
		}
		if (!head)
			return (98);
	}
	return (counter);
}
