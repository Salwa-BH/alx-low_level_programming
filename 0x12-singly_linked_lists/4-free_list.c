#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head)
	{
	free_list(head->next);
	free(head->str);
	free(head);
	}
}
