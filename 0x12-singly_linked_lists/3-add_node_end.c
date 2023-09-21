
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
typedef struct list_t {
    char *str;
    struct list_t *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str) {
    // Create a new node
    list_t *new_node = (list_t *)malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL; // Memory allocation failed
    }

    // Duplicate the string using strdup
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return NULL; // String duplication failed
    }

    // Set the next pointer of the new node to NULL
    new_node->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = new_node;
    } else {
        // Find the last node in the list
        list_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Add the new node to the end of the list
        current->next = new_node;
    }

    return new_node;
}

int main() {
    // Example usage
    list_t *head = NULL;
    add_node_end(&head, "Node 1");
    add_node_end(&head, "Node 2");

    // Print the list
    list_t *current = head;
    while (current != NULL) {
        printf("%s\n", current->str);
        current = current->next;
    }

    // Don't forget to free the memory when done
    current = head;
    while (current != NULL) {
        list_t *temp = current;
        current = current->next;
        free(temp->str);
        free(temp);
    }

    return 0;
}
