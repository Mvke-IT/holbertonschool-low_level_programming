#include <stddef.h>
#ifndef function_pointer_h
#define function_pointer_h
int _putchar(char c);
void print_name(char *name, void (*m)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
