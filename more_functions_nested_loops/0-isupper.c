#include "main.h"

/**
 * _isupper - check if character is uppercase
 * Return: 1 if character is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
