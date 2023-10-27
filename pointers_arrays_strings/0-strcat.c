#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the target srtring to be concatenated
 * @src: pointer to the strign to concatenate
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	strcpy (dest + strlen(dest), src);
	return dest;
}
