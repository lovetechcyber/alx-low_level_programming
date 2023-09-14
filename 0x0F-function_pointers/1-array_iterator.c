include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: input integer array.
 * @size: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int)) {
    for (size_t i = 0; i < size; i++) {
        action(array[i]);
    }
}

// function to be used with array_iterator
void func(int a)
{
    printf("%d\n", a);
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5};
    size_t arraySize = sizeof(myArr) / sizeof(myArray[0]);

    // Using array_iterator to print each element
    array_iterator(myArr, arraySize, func);

    return 0;
}
