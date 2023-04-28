#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: name of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	while(h)
	{
		count++;
		printf("%d\n",h->n);
		h = h->next;
	}
	return (count);

}
