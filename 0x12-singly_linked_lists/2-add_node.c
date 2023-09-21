#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str) {
    if (str == NULL) {
        return NULL;
    }

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->next = *head;
    *head = new_node;

    return new_node;
}

int main() {
    list_t *head = NULL;

    add_node(&head, "Node 1");
    add_node(&head, "Node 2");
    add_node(&head, "Node 3");

    // Printing the list for verification
    list_t *current = head;
    while (current != NULL) {
        printf("%s\n", current->str);
        current = current->next;
    }

    // Freeing the allocated memory
    current = head;
    while (current != NULL) {
        list_t *temp = current;
        current = current->next;
        free(temp->str);
        free(temp);
    }

    return 0;
}



