#include "main.h"
#include <stddef.h>
/**
 * _strncat - concatenates two strings
 *@dest: concatenated destination
 *@src: pointer to string to be concatenated
 *@n: n is the number of bytes of src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n) {
	size_t dest_len = 0;
	size_t i;

	// Find the length of dest
	for (i = 0; dest[i] != '\0'; i++) {
		dest_len++;
	}

	// Concatenate at most n bytes from src
	for (i = 0; i < n && src[i] != '\0'; i++) {
		dest[dest_len + i] = src[i];
	}

	// Add null-terminator to dest
	dest[dest_len + i] = '\0';

	return dest;
}
