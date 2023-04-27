#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - to add node to a list
 * Description: add new node at the beginning
 * @head: head of the list
 * @str: string of the new node
 * Return: the new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lst = malloc(sizeof(list_t));
    int sizeString=0;

    if (lst == NULL)
        return (NULL);

    lst->str = strdup(str);
    
    while (str[sizeString] != '\0')
        sizeString++;
    lst->len = sizeString;
    
    lst->next = *head;

    *head = lst;

    return (lst);
    
}
