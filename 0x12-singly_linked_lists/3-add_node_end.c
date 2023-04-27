#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_t *add_node_end(list_t **head, const char *str)
 * Description: add new node at the end of the list
 * @head: head of the list
 * @str: string of the new node
 * Return: the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst = malloc(sizeof(list_t));
    int sizeString=0;

    if (lst == NULL || str == NULL)
        return (NULL);

    lst->str = strdup(str);
    
    while (str[sizeString] != '\0')
        sizeString++;
    lst->len = sizeString;
    
    lst->next = NULL;

    while(*head)
    {
        if ((*head)->next == NULL)
            (*head)->next = lst;
    }

    return (lst);
    
}
