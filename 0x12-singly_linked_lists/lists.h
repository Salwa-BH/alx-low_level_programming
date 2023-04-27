#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_t: single linked list
 * @str: string
 * @len: len of string
 * @next: points to next node
 *
 * Description: singly linked list
 */
typedef struct node {
    char *str;
    int len;
    struct node *next;
} list_t;

size_t print_list(const list_t *h);

#endif