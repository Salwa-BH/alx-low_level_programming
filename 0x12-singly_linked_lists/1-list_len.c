#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - to return size of a list
 * @h: name of the list
 * Return: the number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
