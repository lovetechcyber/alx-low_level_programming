#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list.
 * @head: a list that enters to the function.
 */
typedef struct list_t {
    int data;
    struct list_t *next;
} list_t;

void free_list(list_t *head) {
    list_t *current = head;
    while (current != NULL) {
        list_t *next = current->next;
        free(current);
        current = next;
    }
}

