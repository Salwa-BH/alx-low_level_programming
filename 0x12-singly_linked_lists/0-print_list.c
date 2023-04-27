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
    size_t nbr = 0;
    if( h == NULL)
        return 0;
    

    while(h != NULL)
    {
        nbr++;
        if(h->str == NULL)
            printf("[0] (nil)");
        else
            printf("[%d] %s",h->len, h->str);
        h = h->next;
    }
    return nbr;
}
