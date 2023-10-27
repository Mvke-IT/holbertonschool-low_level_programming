#include "main.h"
/**
 * _strncat - concatenates two strings
 *@dest: concatenated destination
 *@src: pointer to string to be concatenated
 *@n: n is the number of bytes of src
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*src && n--)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return dest;
}
