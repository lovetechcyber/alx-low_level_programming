#include "holberton.h"
#include <stdio.h>

/**
 * _islower - Check Holberton
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c) {
    // Check if the character is within the lowercase ASCII range
    if (c >= 'a' && c <= 'z') {
        return 1; // Character is lowercase
    } else {
        return 0; // Character is not lowercase
    }
}
