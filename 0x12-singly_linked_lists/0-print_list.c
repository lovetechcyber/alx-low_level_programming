#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */


size_t print_list(const list_t *h)
{
    size_t node_count = 0;
    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else

    		printf("[%d] %s\n", h->len, h->str);
        node_count++;
        h = h->next;
    }
    return node_count;
}

