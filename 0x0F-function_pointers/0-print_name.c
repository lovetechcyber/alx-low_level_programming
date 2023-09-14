#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: no return.
 */
void custom_print(char *name) {
    while (*name != '\0') {
        putchar(*name);
        name++;
    }
}

void print_name(char *name, void (*f)(char *)) {
    f(name);
}
