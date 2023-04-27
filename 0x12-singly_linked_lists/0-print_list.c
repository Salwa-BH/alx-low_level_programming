#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * size_t print_list(const list_t *h) 
 * @h: name of the list
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
    list_t* current = NULL;
    size_t nbr = 0;
    if( h == NULL)
        return 0;
    
    
    current = (list_t *) h;

    while(current != NULL)
    {
        nbr++;
        if(current->str == NULL)
            printf("[0] (nil)");
        else
            printf("[%d] %s",current->len, current->str);
        current = current->next;
        
    }
    return nbr;
}
