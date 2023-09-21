
#include <stddef.h>
#include "lists.h"

/**
 * list_len - number of elements list
 * @h: pointer to structure
 * Return: length.
 */
/* Define the structure for the linked list node */
typedef struct list_s {
    int value;            /* Data value */
    struct list_s *next; 
} list_t;

size_t list_len(const list_t *h) {
    size_t count = 0;  
    
    while (h != NULL) {
        count++;         
        h = h->next;     
    }

    return count; 
}

