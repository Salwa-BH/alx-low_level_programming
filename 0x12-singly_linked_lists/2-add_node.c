#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_t *add_node(list_t **head, const char *str)
 * Description: add new node at the beginning
 * @head: head of the list
 * @str: string of the new node
 * Return: the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lst = malloc(sizeof(list_t));

    if (lst == NULL)
        return (NULL);

    lst->str = strdup(str);
    int i=0;
    while (str[i] != '\0')
        i++;
    lst->len = i;
    lst->next = *head;

    *head = lst;

    return (lst);
    
}
