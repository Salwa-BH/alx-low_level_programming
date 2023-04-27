#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - to add node to a list at the end
 * Description: add new node at the end of the list
 * @head: head of the list
 * @str: string of the new node
 * Return: the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst = malloc(sizeof(list_t));
	int sizeString = 0;

	if (lst == NULL || str == NULL)
		return (NULL);
	
	lst->str = strdup(str);
	while (str[sizeString] != '\0')
		sizeString++;
	lst->len = sizeString;
	lst->next = NULL;
	
	if (*head == NULL)
	{
		*head = lst;
		return lst;
	}
	while (*head)
	{
		if ((*head)->next == NULL)
			(*head)->next = lst;
	}
	return (lst);
}
